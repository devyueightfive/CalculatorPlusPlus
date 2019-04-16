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

BinaryExpression::BinaryExpression() {
}

BinaryExpression::BinaryExpression(std::string left, std::string right, std::string op) {
    this->leftOperand = std::stod(left);
    this->rightOperand = std::stod(right);
    this->operation = op;
}

BinaryExpression::~BinaryExpression() {
}

