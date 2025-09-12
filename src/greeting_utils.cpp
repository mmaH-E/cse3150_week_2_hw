#include "greeting_utils.h"


namespace GreetingUtils{
    std::string create_message(const std::string& name){
        std::string phrase = "Hello, " + name + "!";
        
        return phrase;
    }

    char* format_as_c_string(const std::string& msg){
        
        int size = msg.size();
        char *point = new char[size+1];

        for (int i=0; i < size; i++){
            point[i] = msg[i];
        }
        
        point[size] = '\0';

        return point;
    }
}