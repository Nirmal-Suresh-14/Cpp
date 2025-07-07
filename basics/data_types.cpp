/**
 * @file data_types.cpp
 * @brief Learning the data types in C++
 * @author Nemo
 * @date 7th-July
 */
#include <iostream>
#include <cstring>
#include <iomanip>

int main(){

    // Declaring variables to store information of a person
    int     age;
    float   weight, height;
    double  pi;
    char    name[10];
    bool    isTrue;

    std::cout<<"Hello World!\n";
    std::cout<<"This is the second line"<<std::endl;

    age     = 1;
    weight  = 67.88888888888888888;
    pi      = 3.24259267849204583409580945830;
    std::strcpy(name, "Nemo");
    isTrue = false;

    std::cout<<age<<std::endl;
    std::cout<<weight<<std::endl;
    std::cout<<pi<<std::endl;
    std::cout<<name<<std::endl;

    std::cout<<std::setprecision(30)<<weight<<std::endl;
    std::cout<<std::setprecision(20)<<pi<<std::endl;
    std::cout<<isTrue<<std::endl;


    return 0;
}