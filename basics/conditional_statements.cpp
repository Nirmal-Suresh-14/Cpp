/**
 * @file conditional_statements.cpp
 * @brief Learning the conditional statements of C++
 * @author Nemo
 * @date 8th-July
 */
#include <iostream>

int main(){

    int     day;
    char    tryAgain;

    beginning:

    std::cout<<"Please enter the day (1-7):";
    std::cin>>day;

    switch (day){
        case 1:
            std::cout<<"Monday"<<std::endl;
            break;
        case 2:
            std::cout<<"Tuesday"<<std::endl;
            break;
        case 3:
            std::cout<<"Wednesday"<<std::endl;
            break;
        case 4:
            std::cout<<"Thursday"<<std::endl;
            break;
        case 5:
            std::cout<<"Friday"<<std::endl;
            break;
        case 6:
            std::cout<<"Saturday"<<std::endl;
            break;
        case 7:
            std::cout<<"Sunday"<<std::endl;
            break;
        default:
            std::cout<<"Beyond the week"<<std::endl;
    }


    std::cout<<"do you want to try again (Y/n)? :";
    std::cin>>tryAgain;

    if (tryAgain=='Y'){
        goto beginning;
    }
    else if (tryAgain=='n'){
        std::cout<<"Exiting the code:"<<std::endl;
    }
    else {
        std::cout<<"Wrong input, exiting code:"<<std::endl;
    }

    return 0;
}