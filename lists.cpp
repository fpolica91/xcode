//
//  lists.cpp
//  power
//
//  Created by fabricio policarpo on 2/7/21.
//
#include <iostream>
#include "lists.hpp"

using namespace std;

int list (){
    int A[] = {1,2,3,4,5};
    for (int x: A){
        cout<<" the current number is " << x << endl;
    }
    return 0;
}
