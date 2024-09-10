#include <iostream>

int main(void){
    int x; //declaration!!!
    x = 5; //assignment
    int sum = 5+x;
    //float or double would work.
    double hello1 = 2.3451231;
    float hello = 2.356;
    char grade = 'G'; //to store characters use single bracket marks
    //note that C++ has booleans, and C doesn't.
    bool student = true;
    std::cout << x;//calling the value. No need for format specifers :)
    std::cout << "\n" << x+1 << "\n";//note: you can chain << together like in python.   
    std::cout << hello1 << "\n";
    std::cout << grade << "\n";
    std::cout << student << "\n"; //however, it prints 1 if true and 0 if false. 
    //both can hold decimals, however double holds 15 units of precision whereas float has 6 units of precision
    //note that strings are in the standard space
    std::string name = "JOSHUA GUO";//note that it can't store spaces into the string. 
    std::string num = "12345";
    std::cout << name << " Hello\n";
    std::cout << num;

    return 0;
}