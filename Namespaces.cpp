#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 1;
}

int main(void){
    using namespace first;
    //this causes all variables to come from one unless explicity declared
    //namespace = name conflicts prevention
    //allows for identically named things, but the namespace allows for identical names.
    //std::cout << x; displays default, local x
    std::cout << second::x;
    std::cout << x;
    //:: means accessing a namespace, called a scope resolution operator.

    return 0;
}
