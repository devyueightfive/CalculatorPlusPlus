/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Evaluator.cpp
 * Author: yuri
 * 
 * Created on April 16, 2019, 3:25 PM
 */

#include <sstream>
#include <regex>
#include "Evaluator.h"

Evaluator::Evaluator(string pattern, vector<double>& cache) {
    this->patternOfOperation = pattern;
    this->cache = cache;
}

string Evaluator::evaluate(string& expression) {
    //try find simple expression with given pattern of operator
    while (true) {
        regex pattern = regex(this->patternOfOperation);
        smatch matches;
        bool found = regex_search(expression, matches, pattern);
        if (found == false) {
            break;
        }
        //for every found simple expression calculate it
        double value = this->calculate(matches[0]);
        //save in cache
        this->cache.push_back(value);
        int ordinal_number = cache.size() - 1;
        int start_position = expression.find(matches[0]);
        //replace simple expression with ordinal number in cache of calculated values
        //cache helps save accuracy of calculated values
        expression.replace(
                start_position,
                matches[0].str().length(),
                "{" + std::to_string(ordinal_number) + "}"
                );
    }
    return expression;
}

string Evaluator::toCalculatedExpression(string& expression) {
    //try find simple expression with given pattern of operator
    while (true) {
        regex operation_pattern = regex(Evaluator::PATTERN_OF_ORDINAL_NUMBER_IN_CACHE);
        smatch operation_matches;
        bool found = regex_search(expression, operation_matches, operation_pattern);
        if (found == false) {
            break;
        }
        smatch ordinal_number_matches;
        regex_search(operation_matches[0].str(), ordinal_number_matches, regex("([0-9]+)"));
        int ordinal_number;
        stringstream(ordinal_number_matches[0].str())>>ordinal_number;
        int start_position = expression.find(operation_matches[0].str());
        //replace simple expression with ordinal number in cache of calculated values
        expression.replace(
                start_position,
                operation_matches[0].str().length(),
                std::to_string(this->cache[ordinal_number])
                );
    }
    return expression;
}

Evaluator::~Evaluator() {
}

