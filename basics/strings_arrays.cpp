/**
 * @file strings_arrays.cpp
 * @brief Learning the strings and arrays in C++
 * @author Nemo
 * @date 8th-July
 */
#include <iostream>
#include <string>

int main(){

    // Declaring varaiables
    std::string     name;

    std::cout << "Enter your name:";
    std::getline(std::cin, name);

    std::cout << "Your name is: " << name <<"\n";
    
    // Adding Second name to the string
    name += " Suresh";

    std::cout << "Your full name is: " << name << "\n";

    return 0;
}

