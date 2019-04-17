/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SimpleCalculator.h
 * Author: yuri
 *
 * Created on April 16, 2019, 3:23 PM
 */

#ifndef SIMPLECALCULATOR_H
#define SIMPLECALCULATOR_H

#include <string>

class SimpleCalculator {
public:

    /*
     * Pattern of float number (with point)
     */
    static const std::string PATTERN_OF_FLOAT_NUMBER;

    /*
     * Pattern of ordinal number in cache of calculated values
     */
    static const std::string PATTERN_OF_ORDINAL_NUMBER_IN_CACHE;

    /*
     * Pattern of value (float number or ordinal number in cache)
     */
    static const std::string PATTERN_OF_NUMBER;

    /**
     * Pattern of  high priority logic operator.
     */
    static const std::string PATTERN_OF_HIGH_PRIORITY_LOGICAL_OPERATOR;

    /**
     * Pattern of low priority logic operator.
     */
    static const std::string PATTERN_OF_LOW_PRIORITY_LOGICAL_OPERATOR;

    /**
     * Pattern represents comparison operators.
     */
    static const std::string PATTERN_OF_COMPARISON_OPERATOR;

    /**
     * Pattern represents two binary operators: multiply and division.
     */
    static const std::string PATTERN_OF_HIGH_PRIORITY_BINARY_OPERATOR;

    /**
     * Pattern represents two binary operators: plus and minus.
     */
    static const std::string PATTERN_OF_LOW_PRIORITY_BINARY_OPERATOR;

    static const std::string PATTERN_OF_OPERATOR;

    /**
     * Pattern represents simple comparison expression.
     */
    static const std::string PATTERN_OF_COMPARISON_EXPRESSION;

    /**
     * Pattern represents simple expression with low logical operator.
     */
    static const std::string PATTERN_OF_LOW_PRIORITY_LOGICAL_EXPRESSION;
    /**
     * Pattern represents simple expression with low logical operator.
     */
    static const std::string PATTERN_OF_HIGH_PRIORITY_LOGICAL_EXPRESSION;
    /**
     * Pattern represents simple ternary expression.
     */
    static const std::string PATTERN_OF_TERNARY_EXPRESSION;

    /**
     * Pattern represents simple binary expression with multiply and division
     * operators.
     */
    static const std::string PATTERN_OF_HIGH_PRIORITY_BINARY_EXPRESSION;
    /**
     * Pattern represents simple binary expression with plus and minus
     * operators.
     */
    static const std::string PATTERN_OF_LOW_PRIORITY_BINARY_EXPRESSION;
    /**
     * Pattern represents simple expression. The expression with only one pair
     * of parentheses.
     */
    static const std::string PATTERN_OF_SIMPLE_PARENTHESES;


    /*
     * Constructor
     */
    SimpleCalculator();

    /*
     * Evaluates a string expression
     */
    virtual double calculate(std::string simpleExpression);

    ~SimpleCalculator();

private:

};

#endif /* SIMPLECALCULATOR_H */

