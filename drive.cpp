/*
@author: Mirko Lantieri
@date: 02/12/2021
All rights reserved.

drive.cpp : Drive library implementation
*/

#include "drive.hpp"
#include <vector>
#include <unordered_map>
#include <string>

using namespace Drive;

int get_frequency(std::vector<std::string> v, std::string w){

    /*
    Method get_frequency: returns the most frequent word inside a vector
    Inputs: vector v, string w (query word)
    return: frequency (integer)
    */

//  Initialize an empty unordered map object named *freq* for mapping the query string
//  and a string named *word* (passed by value from the input)
    std::unordered_map<std::string, int> freq = std::unordered_map<std::string, int>();
    std::string word = w;

// Cycle through foreach statement and reference the item of the vector
// by mapping it with the item counter (freq object)
    for (std::string const &i: v)
        freq[i]++;
    
// Output a simple statement 
    std::cout << "Word: " << word << " - Frequency ";

// Return as an integer the respective frequency 
    return int(freq[word]);
}