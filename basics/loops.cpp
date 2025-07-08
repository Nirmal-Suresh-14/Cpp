/**
 * @file loops.cpp
 * @brief Learning the loops of C++
 * @author Nemo
 * @date 7th-July
 */
#include <iostream>

int main(){

    int     i;

    // For loop
    std::cout<<"For loop"<<std::endl;
    for (i=1; i<10; i++){
        std::cout<<i<<std::endl;
    }

    // Whille loop
    std::cout<<"While loop"<<std::endl;
    while (i>2){
        std::cout<<i<<std::endl;
        i--;
    }

    // Do whille loop
    std::cout<<"Do while loop"<<std::endl;
    do {
        if (i==3) {
            std::cout<<"skipping 3"<<std::endl;
            i++;
            continue;
        }
        std::cout<<i<<std::endl;
        i++;
        if (i==8) break;
    } while (i<10);

    std::cout<<"final value of i: "<<i<<std::endl;


    return 0;
}