/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Evaluator.h
 * Author: yuri
 *
 * Created on April 16, 2019, 3:25 PM
 */

#ifndef EVALUATOR_H
#define EVALUATOR_H
#include <vector>
#include "SimpleCalculator.h"

class Evaluator : SimpleCalculator {
public:
    //pattern of operation
    string patternOfOperation;
    //cache helps save accuracy of calculated values
    vector<double>& cache;

    Evaluator(string pattern, vector<double>& cache);

    /*
     * Evaluates expression by operator given by patternOfOperation.
     * Calculations by operator saves in cache.
     * Calculated values in expression are replaced by ordinal numbers in cache 
     */
    string evaluate(string& expression);

    /*
     * Replaces ordinal numbers by values in cache
     */
    string toCalculatedExpression(string& expression);

    virtual ~Evaluator();
private:

};

#endif /* EVALUATOR_H */

