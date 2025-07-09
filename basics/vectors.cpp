/**
 * @file vectors.cpp
 * @brief Learning the vectors in C++
 * @author Nemo
 * @date 8th-July
 */
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    for (int num : numbers) {
        std::cout << num << std::endl;
    }

    return 0;
}