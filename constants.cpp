#include <iostream>

int main(void){
    //const prefix, make letters uppercase. They cannot be changed, makes the varaiable read only
    //usually used for constants(duh)
    //if you try to modify it, it will spit out an error.
    const double PI = 3.141519;
    double radius = 10;
    double circumference = 2*PI*radius;
    std::cout << circumference << " cm";
    return 0;
}