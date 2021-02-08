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
#include "lists.hpp"

using namespace std;

void left_rotate(int arr[], int size) {
  // Declares a loop counter variable
  int j;
  // Store the element at index 0
  int temp = arr[0];
    
  // Traverse array
  for (j = 0; j < size - 1; j++) {
    arr[j] = arr[j + 1];
  }
  // Store the value of temp at the last index of an array
  arr[j] = temp;

}

void sort_elements(int arr[], int size){
  for (int j = 0; j < size - 1; j++)
    {
        if (arr[j] < arr[j + 1])
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            j = -1;
        }
    }
}





using namespace std;
int main(int argc, const char * argv[]) {
    int arr[4] = {1,3,4,5};
    int size = 4;
    left_rotate(arr, size);
    
}

