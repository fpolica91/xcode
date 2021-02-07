#include <iostream>
 


int power(int base, int exponent){
    if(exponent ==1){
        return base;
    }
    return base * power(base, exponent-1);
    
}
