//
//  fibonacci.cpp
//  power
//
//  Created by fabricio policarpo on 2/7/21.
//
#include <iostream>
#include "fibonacci.hpp"

int fibonacci(int n){
    if(n == 1 || n == 0){
        return n;
    }
    else return fibonacci(n -1) + fibonacci(n - 2);
}
