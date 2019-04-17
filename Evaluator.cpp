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
#include <string>

Evaluator::Evaluator(std::string pattern, std::vector<double>* cache) : SimpleCalculator() {
    this->patternOfOperation = pattern;
    this->cache = cache;
}

std::string* Evaluator::evaluate(std::string* expression) {
    //infinite loop (breaking on not found simple expression)
    while (true) {
        //try find simple expression with given pattern of operator
        std::regex operation_regex = std::regex(this->patternOfOperation);
        std::smatch operation_matches;
        bool found = std::regex_search(*expression, operation_matches, operation_regex);
        if (found == false) {
            break;
        }
        //for every found simple expression calculate it
        double value = this->calculate(operation_matches[0].str());
        //save in cache
        (*this->cache).push_back(value);
        int ordinal_number = std::string(operation_matches.prefix().str()).length();
        int start_position = (*expression).find(operation_matches[0].str());
        //replace simple expression with ordinal number in cache of calculated values
        //cache helps save accuracy of calculated values
        (*expression).replace(
                start_position,
                operation_matches[0].str().length(),
                "{" + std::to_string(ordinal_number) + "}"
                );
    }
    return expression;
}

std::string* Evaluator::toCalculatedExpression(std::string* expression) {
    //try find simple expression with given pattern of operator
    while (true) {
        std::regex operation_pattern = std::regex(Evaluator::PATTERN_OF_ORDINAL_NUMBER_IN_CACHE);
        std::smatch operation_matches;
        bool found = regex_search(*expression, operation_matches, operation_pattern);
        if (found == false) {
            break;
        }
        
        int ordinal_number;
        ordinal_number = std::stoi(std::string(operation_matches[0]).substr(1, std::string(operation_matches[0]).length()-2));
        int start_position = (*expression).find(operation_matches[0].str());
        //replace simple expression with ordinal number in cache of calculated values
        (*expression).replace(
                start_position,
                operation_matches[0].str().length(),
                std::to_string((*this->cache)[ordinal_number])
                );
    }
    return expression;
}

Evaluator::~Evaluator() {
}

