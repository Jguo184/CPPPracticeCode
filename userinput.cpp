#include <iostream>
//namespaces...ask more in detail with Dr.Chen.
int main(void){
    std::string name;
    //we can't have spaces with stirng. We need to use a different operator.
    int age;
    std::cout << "what is your age?";
    //newline buffer issues. if you follow an input when entering, the second getline accepts the getline as an input.
    //to do this, edit getline.
    std::cin >> age;
    std::cout << "what is your name?: \n";
    //getline allows for input to contain spaces, or whitespaces.

    std::getline(std::cin >>std::ws, name);
    
    //basically, CIN means input. C input, indicated by >> instead of <<
    std::cout << "Hello " << name; 
    std::cout << "\nyour age is " << age;
    return 0;
}