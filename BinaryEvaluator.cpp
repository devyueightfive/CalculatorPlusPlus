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

BinaryEvaluator::BinaryEvaluator() {
}

double BinaryEvaluator::calculate(string simpleExpression) {
    regex pattern = regex(SimpleCalculator::);
    smatch matches;
    bool found = regex_search(expression, matches, pattern);
    if (found == false) {
        break;
    }
    
    string left = ;
    string right = ;
    string left = ;
}

BinaryEvaluator::~BinaryEvaluator() {
}

