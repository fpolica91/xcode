//
//  main.cpp
//  power
//
//  Created by fabricio policarpo on 2/5/21.
//


#include <iostream>
#include <stdio.h>
#include "power.hpp"
#include "fibonacci.hpp"






using namespace std;
int main(int argc, const char * argv[]) {
    int result = power(2, 3);
    int fib = fibonacci(10);
    cout<<"result for power function is "<<result<<endl;
    cout<<"result for fiboancci function is " << fib <<endl;
    return 0;
}
