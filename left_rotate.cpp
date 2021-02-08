//
//  left_rotate.cpp
//  power
//
//  Created by fabricio policarpo on 2/7/21.
//

#include <iostream>
using namespace std;
#include "left_rotate.hpp"

int rotate(int arr[], int size) {
    int j;
    int temp = arr[0];
    for(j =0; j < size -1; j++){
        arr[j] = arr[j + 1];
    }
    arr[j] = temp;
    return 0;
}
