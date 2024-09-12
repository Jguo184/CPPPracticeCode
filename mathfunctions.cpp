#include <iostream>
#include <cmath>

int main(){
    double x = 3;
    double y = 4;
    double z;
    //std::max is a function in the standard namespace, finds the max of the two given inputs.
    z = std::max(x,y);
    std::cout << z;
    //pow -> same in C.
    //sqrt -> same in C.
    //abs -> the same. 
    z = round(x);
    //rounding up or down. Ceil/floor the same as C.
    
}