/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinaryExpression.h
 * Author: yuri
 *
 * Created on April 16, 2019, 5:50 PM
 */

#ifndef BINARYEXPRESSION_H
#define BINARYEXPRESSION_H

#include "SimpleCalculator.h"

class BinaryExpression {
public:
    double leftOperand;
    double rightOperand;
    std::string operation;

    /*
     * Constructor from strings
     * */
    BinaryExpression(std::string *leftOperand, std::string *rightOperand, std::string *operation);

    /*
     * Factory from string
     */
    static BinaryExpression toBinary(std::string simpleExpression);

    /*
     * String representation
     */
    std::string toString();

    ~BinaryExpression();

private:
};

#endif /* BINARYEXPRESSION_H */
