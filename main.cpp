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
#include <iostream>
#include <string>
#include <vector>
#include <exception>
using namespace std;
int square(int);

/*
 * 
 */
int main() {
    std::cout << "Hello, world!\n";
    int x = 9;
    int a=0;
    double b;
    try{
        b = x/a;
        cout << "result of division is\t" << b;
    }
    catch(exception& е){
        cerr << " runtime error : " << e.what() << ' \n ';
        cout<<"Division on zero!!!";
        return 1;
    }
    
    return 0;
}

int square(int x) {
    return x*x;
}


