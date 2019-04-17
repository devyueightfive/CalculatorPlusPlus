/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinaryExpression.cpp
 * Author: yuri
 * 
 * Created on April 16, 2019, 5:50 PM
 */

#include "BinaryExpression.h"
#include <regex>
#include <string>
#include <iostream>

/*
 * Constructor
 */
BinaryExpression::BinaryExpression(std::string *left, std::string *right, std::string *op) {
    this->leftOperand = std::stod(*left);
    this->rightOperand = std::stod(*right);
    this->operation = *op;
}

/*
 * Converts string expression to Binary object
 */
BinaryExpression BinaryExpression::toBinary(std::string simpleExpression) {
    //matches for numbers
    std::smatch number_matches;
    std::smatch operator_matches;
    //regex for numbers and operator
    std::regex patternOfNumber = std::regex(SimpleCalculator::PATTERN_OF_NUMBER);
    std::regex patternOfOperator = std::regex(SimpleCalculator::PATTERN_OF_OPERATOR);
    //search numbers (operands)
    std::regex_search(simpleExpression, number_matches, patternOfNumber);
    std::string left(number_matches.str()); //left
    std::string suffix = number_matches.suffix();
    std::regex_search(suffix, number_matches, patternOfNumber);
    std::string right(number_matches.str()); //right
    //search operator
    regex_search(simpleExpression, operator_matches, patternOfOperator);
    std::string operation(operator_matches.str());

    BinaryExpression be = BinaryExpression(&left, &right, &operation);
    return be;
}

std::string BinaryExpression::toString() {
    std::string
            result =
            std::string("left operand : ")
                    .append(std::to_string(this->leftOperand))
                    .append("\noperator : ")
                    .append(this->operation)
                    .append("\nright operand : ")
                    .append(std::to_string(this->rightOperand));
    return result;
}

BinaryExpression::~BinaryExpression() {
}
