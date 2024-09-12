#include <iostream>
#include <cmath>

int main(void){
    //create a hypotenus program that asks the user for two inputs then calculates the output
    using std::cout;//using the std::cout namespace for repetition.
    double side1,side2,hypotenuse;
    cout << "Hello! Please enter the length of the sides \n";
    //asking for user inputs
    std::cin >> side1;
    cout << "what about the second side length? \n";
    std::cin >> side2;
    hypotenuse = sqrt(pow(side1, 2)+pow(side2,2));
    cout <<"The Hypotenuse of your triange is " << hypotenuse;
    return 0;
}