/*
@author: Mirko Lantieri
@date: 02/12/2021
All rights reserved.

main.cpp : Main program
*/

#include <iostream>
#include <vector>
#include <string>
#include "drive.cpp"


int main(){
    std::vector<std::string> v = {"dog", "cat", "dog" };
    std::cout<<get_frequency(v, "cat") << std::endl;
    std::cout<<get_frequency(v, "dog");

    return EXIT_SUCCESS;
}