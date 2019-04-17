/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: yuri
 *
 * Created on April 16, 2019, 10:46 AM
 */


#include<string>
#include <iostream>
#include "BinaryExpression.h"

/*
 * 
 */
int main() {
    std::string myString = "-13.4562+-456.4578";
    std::string result = BinaryExpression::toBinary(myString).toString();
    std::cout << result;
    return 0;
}




