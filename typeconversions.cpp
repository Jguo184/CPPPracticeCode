#include <iostream>

int main(void){
    //type conversion: converting data type 
    //implicit = automatic
    //Explicit = precede value with a new data type. You put it in paraentheses.
    //double x = (int) 3.14;
    //basically I truncated the decimals by making the variable an integer, but then I stored the value into a double.
    //char x = 100.2;//prints d as ascii. This is an implicit type conversion, because the system converts the integer to a char.
    //to implicitly type convert, add (int) to the front of anything.
    //for example:
    //std::cout <<(char)100;//this would print d
    /*
    
    int correct = 8;
    int questions = 10;
    double score = correct / questions *100;
    */
    //why does this block code give 0%? its because we are doing integer division.
    //to fix, do this:
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;
    //why does int divided by a double convert to a double? how does that work?
    
    return 0;
}