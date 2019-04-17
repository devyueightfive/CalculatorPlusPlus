/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SimpleCalculator.cpp
 * Author: yuri
 * 
 * Created on April 16, 2019, 3:23 PM
 */

#include "SimpleCalculator.h"

/*
 * Pattern of float number (with point)
 */
const std::string SimpleCalculator::PATTERN_OF_FLOAT_NUMBER = std::string()
        .append("([-]?[0-9]*\\.?[0-9]+")
        .append("|")
        .append("[-]?[0-9]+\\.?[0-9]*)");

/*
 * Pattern of ordinal number in cache of calculated values
 */
const std::string SimpleCalculator::PATTERN_OF_ORDINAL_NUMBER_IN_CACHE = std::string()
        .append("(")
        .append("\\{[0-9]).append(\\}")
        .append(")");

/*
 * Pattern of value (float number or ordinal number in cache)
 */
const std::string SimpleCalculator::PATTERN_OF_NUMBER = std::string()
        .append("(")
        .append(SimpleCalculator::PATTERN_OF_FLOAT_NUMBER)
        .append("|")
        .append(SimpleCalculator::PATTERN_OF_ORDINAL_NUMBER_IN_CACHE)
        .append(")");

/**
 * Pattern of  high priority logic operator.
 */
const std::string SimpleCalculator::PATTERN_OF_HIGH_PRIORITY_LOGICAL_OPERATOR = std::string()
        .append("(&)");

/**
 * Pattern of low priority logic operator.
 */
const std::string SimpleCalculator::PATTERN_OF_LOW_PRIORITY_LOGICAL_OPERATOR = std::string()
        .append("(\\|)");

/**
 * Pattern represents comparison operators.
 */
const std::string SimpleCalculator::PATTERN_OF_COMPARISON_OPERATOR = std::string()
        .append("(<=|>=|>|<|==|!=)");

/**
 * Pattern represents two binary operators: multiply and division.
 */
const std::string SimpleCalculator::PATTERN_OF_HIGH_PRIORITY_BINARY_OPERATOR = std::string()
        .append("(\\*|/)");

/**
 * Pattern represents two binary operators: plus and minus.
 */
const std::string SimpleCalculator::PATTERN_OF_LOW_PRIORITY_BINARY_OPERATOR = std::string()
        .append("(\\+|-)");

const std::string SimpleCalculator::PATTERN_OF_OPERATOR = std::string()
        .append("(")
        .append(SimpleCalculator::PATTERN_OF_HIGH_PRIORITY_BINARY_OPERATOR)
        .append("|")
        .append(SimpleCalculator::PATTERN_OF_LOW_PRIORITY_BINARY_OPERATOR)
        .append("|")
        .append(SimpleCalculator::PATTERN_OF_COMPARISON_OPERATOR)
        .append("|")
        .append(SimpleCalculator::PATTERN_OF_HIGH_PRIORITY_LOGICAL_OPERATOR)
        .append("|")
        .append(SimpleCalculator::PATTERN_OF_LOW_PRIORITY_LOGICAL_OPERATOR)
        .append(")");

/**
 * Pattern represents simple comparison expression.
 */
const std::string SimpleCalculator::PATTERN_OF_COMPARISON_EXPRESSION = std::string()
        .append("(")
        .append(SimpleCalculator::PATTERN_OF_NUMBER)
        .append(SimpleCalculator::PATTERN_OF_COMPARISON_OPERATOR)
        .append(SimpleCalculator::PATTERN_OF_NUMBER)
        .append(")");

/**
 * Pattern represents simple expression with low logical operator.
 */
const std::string SimpleCalculator::PATTERN_OF_LOW_PRIORITY_LOGICAL_EXPRESSION = std::string()
        .append("(")
        .append(SimpleCalculator::PATTERN_OF_NUMBER)
        .append(SimpleCalculator::PATTERN_OF_LOW_PRIORITY_LOGICAL_OPERATOR)
        .append(SimpleCalculator::PATTERN_OF_NUMBER)
        .append(")");
/**
 * Pattern represents simple expression with low logical operator.
 */
const std::string SimpleCalculator::PATTERN_OF_HIGH_PRIORITY_LOGICAL_EXPRESSION = std::string().append("(").append(
        SimpleCalculator::PATTERN_OF_NUMBER).append(SimpleCalculator::PATTERN_OF_HIGH_PRIORITY_LOGICAL_OPERATOR).append(
        SimpleCalculator::PATTERN_OF_NUMBER).append(")");
/**
 * Pattern represents simple ternary expression.
 */
const std::string SimpleCalculator::PATTERN_OF_TERNARY_EXPRESSION = std::string()
        .append("(")
        .append(SimpleCalculator::PATTERN_OF_NUMBER)
        .append("\\?")
        .append(SimpleCalculator::PATTERN_OF_NUMBER)
        .append(":")
        .append(SimpleCalculator::PATTERN_OF_NUMBER)
        .append(")");

/**
 * Pattern represents simple binary expression with multiply and division
 * operators.
 */
const std::string SimpleCalculator::PATTERN_OF_HIGH_PRIORITY_BINARY_EXPRESSION = std::string()
        .append("(")
        .append(SimpleCalculator::PATTERN_OF_NUMBER)
        .append(SimpleCalculator::PATTERN_OF_HIGH_PRIORITY_BINARY_OPERATOR)
        .append(SimpleCalculator::PATTERN_OF_NUMBER)
        .append(")");
/**
 * Pattern represents simple binary expression with plus and minus
 * operators.
 */
const std::string SimpleCalculator::PATTERN_OF_LOW_PRIORITY_BINARY_EXPRESSION = std::string()
        .append("(")
        .append(SimpleCalculator::PATTERN_OF_NUMBER)
        .append(SimpleCalculator::PATTERN_OF_LOW_PRIORITY_BINARY_OPERATOR)
        .append(SimpleCalculator::PATTERN_OF_NUMBER)
        .append(")");
/**
 * Pattern represents simple expression. The expression with only one pair
 * of parentheses.
 */
const std::string SimpleCalculator::PATTERN_OF_SIMPLE_PARENTHESES = std::string()
        .append("(")
        .append("\\(")
        .append("[^\\(^\\)]*")
        .append(SimpleCalculator::PATTERN_OF_NUMBER)
        .append("[^\\(^\\)]*")
        .append("\\)")
        .append(")");

SimpleCalculator::SimpleCalculator() {
}

double SimpleCalculator::calculate(std::string simpleExpression) {}

SimpleCalculator::~SimpleCalculator() {
}
