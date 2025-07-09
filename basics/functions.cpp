/**
 * @file functions.cpp
 * @brief Learning the functions in C++
 * @author Nemo
 * @date 8th-July
 */
#include <iostream>

/**
 * @brief Multiplies two numbers
 * @param a First number
 * @param b Second number
 * @return Product of a and b
 */
double multiplyNumbers(double a, double b);

int main(){

    double a, b, c;

    std::cout<<"Enter two numbers: \n";
    std::cin>> a >> b;

    c = multiplyNumbers(a, b);

    std::cout<<"Their product is: "<<c<<"\n";


    return 0;
}


double multiplyNumbers(double a, double b){
    return a*b;
}