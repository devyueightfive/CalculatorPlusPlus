/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinaryEvaluator.cpp
 * Author: yuri
 * 
 * Created on April 16, 2019, 5:28 PM
 */
#include "BinaryEvaluator.h"


BinaryEvaluator::BinaryEvaluator(std::string pattern, std::vector<double> *cache)
        : Evaluator(pattern, cache) {

}

double BinaryEvaluator::calculate(std::string simpleExpression) {
    BinaryExpression be = BinaryExpression::toBinary(simpleExpression);
    double leftOperand = be.leftOperand;
    double rightOperand = be.rightOperand;
    std::string operation = be.operation;

    if (operation == "*") {
        return leftOperand * rightOperand;
    }
    if (operation == "/") {
        if (rightOperand == 0) return 0;
        return leftOperand / rightOperand;
    }
    if (operation == "+") {
        return leftOperand + rightOperand;
    }
    if (operation == "-") {
        return leftOperand - rightOperand;
    }

}


BinaryEvaluator::~BinaryEvaluator() {
}

