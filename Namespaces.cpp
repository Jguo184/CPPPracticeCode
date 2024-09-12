#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 1;
}

int main(void){
    //using namespace std;
    //instead, if you want to save space by calling a lot of std::cout.
    using std::cout;
    using std::string;
    string name = "Joshua Guo";
    //see how using namespaces helps with repetition
    //DONT USE NAMESPACE std! it is evil.
    cout << name;
    //this causes all variables to come from one unless explicity declared
    //namespace = name conflicts prevention
    //allows for identically named things, but the namespace allows for identical names.
    //std::cout << x; displays default, local x
    //okay, to make something easier -> its evil, using namespace std;
    //using namespace std can cause conflicts, so don't use it
    //:: means accessing a namespace, called a scope resolution operator.
    return 0;
}
