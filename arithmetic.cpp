#include <iostream>

int main(void){
    int students = 20;
    students = students + 1;
    //simple addition. Same as python.
    //can also be done with += [number]
    //increment is also the same , var++

    students = students-1;
    //subtraction. Whao!
    //-= is also the same.
    //decrement, would be var--
    students--;
    //multiplication: asterisk
    students*2;
    //or students *=2
    students = students/2;
    //or students /=2;
    //decimals that exist due to division are obliterated
    //if the type is an integer.
    int remainder = students%2;
    std::cout << remainder;
    return 0;
    //note: code follows bedmas, order of operations. when chaining math, its literally just bedmas.
    
}
