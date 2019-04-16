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
using namespace std;

class SimpleCalculator {
public:
    const string PATTERN_OF_FLOAT_NUMBER
            = "([-]?[0-9]*\\.?[0-9]+"
            + "|"
            + "[-]?[0-9]+\\.?[0-9]*)";

    const string PATTERN_OF_ORDINAL_NUMBER_IN_CACHE
            = "("
            + "\\{[0-9]+\\}"
            + ")";

    const string PATTERN_OF_NUMBER
            = "("
            + PATTERN_OF_FLOAT_NUMBER
            + "|"
            + PATTERN_OF_ORDINAL_NUMBER_IN_CACHE
            + ")";

    /**
     * Pattern represents logic high priority operator.
     */
    const string PATTERN_OF_HIGH_PRIORITY_LOGICAL_OPERATOR
            = "(&)";
    /**
     * Pattern represents logic low priority operator.
     */
    const string PATTERN_OF_LOW_PRIORITY_LOGICAL_OPERATOR
            = "(\\|)";

    /**
     * Pattern represents comparison operators.
     */
    const string PATTERN_OF_COMPARISON_OPERATOR
            = "(<=|>=|>|<|==|!=)";

    /**
     * Pattern represents two binary operators: multiply and division.
     */
    const string PATTERN_OF_HIGH_PRIORITY_BINARY_OPERATOR
            = "(\\*|/)";

    /**
     * Pattern represents two binary operators: plus and minus.
     */
    const string PATTERN_OF_LOW_PRIORITY_BINARY_OPERATOR
            = "(\\+|-)";

    const string PATTERN_OF_OPERATOR
            = "("
            + PATTERN_OF_HIGH_PRIORITY_BINARY_OPERATOR
            + "|"
            + PATTERN_OF_LOW_PRIORITY_BINARY_OPERATOR
            + "|"
            + PATTERN_OF_COMPARISON_OPERATOR
            + "|"
            + PATTERN_OF_HIGH_PRIORITY_LOGICAL_OPERATOR
            + "|"
            + PATTERN_OF_LOW_PRIORITY_LOGICAL_OPERATOR
            + ")";

    /**
     * Pattern represents simple comparison expression.
     */
    const string PATTERN_OF_COMPARISON_EXPRESSION
            = "("
            + PATTERN_OF_NUMBER
            + PATTERN_OF_COMPARISON_OPERATOR
            + PATTERN_OF_NUMBER
            + ")";
    /**
     * Pattern represents simple expression with low logical operator.
     */
    const string PATTERN_OF_LOW_PRIORITY_LOGICAL_EXPRESSION
            = "("
            + PATTERN_OF_NUMBER
            + PATTERN_OF_LOW_PRIORITY_LOGICAL_OPERATOR
            + PATTERN_OF_NUMBER
            + ")";
    /**
     * Pattern represents simple expression with low logical operator.
     */
    const string PATTERN_OF_HIGH_PRIORITY_LOGICAL_EXPRESSION
            = "("
            + PATTERN_OF_NUMBER
            + PATTERN_OF_HIGH_PRIORITY_LOGICAL_OPERATOR
            + PATTERN_OF_NUMBER
            + ")";
    /**
     * Pattern represents simple ternary expression.
     */
    const string PATTERN_OF_TERNARY_EXPRESSION
            = "("
            + PATTERN_OF_NUMBER
            + "\\?"
            + PATTERN_OF_NUMBER
            + ":"
            + PATTERN_OF_NUMBER
            + ")";

    /**
     * Pattern represents simple binary expression with multiply and division
     * operators.
     */
    const string PATTERN_OF_HIGH_PRIORITY_BINARY_EXPRESSION
            = "("
            + PATTERN_OF_NUMBER
            + PATTERN_OF_HIGH_PRIORITY_BINARY_OPERATOR
            + PATTERN_OF_NUMBER
            + ")";
    /**
     * Pattern represents simple binary expression with plus and minus
     * operators.
     */
    const string PATTERN_OF_LOW_PRIORITY_BINARY_EXPRESSION
            = "("
            + PATTERN_OF_NUMBER
            + PATTERN_OF_LOW_PRIORITY_BINARY_OPERATOR
            + PATTERN_OF_NUMBER
            + ")";
    /**
     * Pattern represents simple expression. The expression with only one pair
     * of parentheses.
     */
    const string PATTERN_OF_SIMPLE_PARENTHESES
            = "("
            + "\\("
            + "[^\\(^\\)]*"
            + PATTERN_OF_NUMBER
            + "[^\\(^\\)]*"
            + "\\)"
            + ")";



    SimpleCalculator();

    /*
     * Evaluates string expression
     */
    virtual double calculate(string simpleExpression);

    virtual ~SimpleCalculator();
private:

};

#endif /* SIMPLECALCULATOR_H */

