/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinaryEvaluator.h
 * Author: yuri
 *
 * Created on April 16, 2019, 5:28 PM
 */

#ifndef BINARYEVALUATOR_H
#define BINARYEVALUATOR_H

#include "Evaluator.h"
#include "BinaryExpression.h"

class BinaryEvaluator : Evaluator {
public:
    BinaryEvaluator(std::string pattern, std::vector<double>* cache);

    double calculate(std::string simpleExpression) override;

    ~BinaryEvaluator();
private:

};

#endif /* BINARYEVALUATOR_H */

