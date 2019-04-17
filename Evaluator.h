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
    std::string patternOfOperation = NULL;
    //cache helps save accuracy of calculated values
    std::vector<double>* cache = NULL;

    Evaluator(std::string pattern, std::vector<double>* cache);

    /*
     * Evaluates expression by operator given by patternOfOperation.
     * Calculations by operator saves in cache.
     * Calculated values in expression are replaced by ordinal numbers in cache 
     */
    std::string* evaluate(std::string* expression);

    /*
     * Replaces ordinal numbers by values in cache
     */
    std::string* toCalculatedExpression(std::string* expression);

    virtual ~Evaluator();
private:

};

#endif /* EVALUATOR_H */

