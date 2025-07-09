/**
 * @file vectors.cpp
 * @brief Learning the vectors in C++
 * @author Nemo
 * @date 8th-July
 */
#include <iostream>
#include <vector>

int main() {

    int                 depth, cols, rows;
    std::vector<int>    numbers;
    std::vector<std::vector<std::vector<double>>>   matrix;

    // Adding new numbers to the back of the array
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    for (int num : numbers) std::cout << num << std::endl ;

    // Removing numbers from back
    numbers.pop_back();
    for (int num : numbers) std::cout << num << std::endl ;

    // Finding it's size
    std::cout << numbers.size() << std::endl ;

    // Checking an element of the array
    std::cout << numbers.at(1) << std::endl ;

    // Resize the array
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);
    numbers.push_back(60);
    numbers.resize(3);
    for (int num : numbers) std::cout << num << std::endl ;


    // Working with 3d vector



    return 0;
}