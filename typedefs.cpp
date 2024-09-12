#include <iostream>
#include <vector>
//basically, I can replace the std::string to another alias, making it easier to read. There can
//be some really long identifers, so this helps with readability
/*
typedef std::string text_t;
typedef int number;
*/
//typedef is outdated, using keyword is better.
using text_t = std::string;
using number = int;
//the above does the same thing, but is more popular and is more suitable for templates.
//use these when there is a clear benefit, when the type is really long.
int main(void){
    text_t name = "Yisum";
    number h = 23;
    std::cout << name;
    std::cout << h<<"\n";

    return 0;
}