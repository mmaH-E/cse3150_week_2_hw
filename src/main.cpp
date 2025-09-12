#include <iostream>
#include "greeting_utils.h"

int main(){
    std::cout << "Enter your full name: \n";
    std::string name;
    std::getline(std::cin, name);

    std::string greeting = GreetingUtils::create_message(name);

    char* dynamic_greeting = GreetingUtils::format_as_c_string(greeting);

    std::cout << dynamic_greeting;

    delete dynamic_greeting;
    
    return 0;
}