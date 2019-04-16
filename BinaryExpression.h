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

#include <string>

class BinaryExpression {
public:
    double leftOperand;
    double rightOperand;
    std::string operation;
    BinaryExpression();
    BinaryExpression(std::string left, std::string right, std::string op);
    virtual ~BinaryExpression();
private:

};

#endif /* BINARYEXPRESSION_H */

