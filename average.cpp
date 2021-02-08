//
//  average.cpp
//  power
//
//  Created by fabricio policarpo on 2/7/21.
//

#include <iostream>
#include "average.hpp"

double average(double marks[], int size){
    double average = 0;
    for(int i = 0; i < size; i ++){
        average = average + marks[i];
    }
    return average/size;
}
