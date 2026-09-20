#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <deque>
#include <list>

void testVector(){
    std::vector<int> vec;

    std::cout << "---TEST VECTOR---" << std::endl;
    for (int i = 0; i < 4 ; i++ )
        vec.push_back(i);
    std::cout << "Vector elements: ";
    for (int i = 0; i < 4 ; i++ )
        std::cout << vec[i] << " ";

    std::cout << std::endl;
    std::cout << "Search for value 2 " << std::endl;
    std::cout << "Value found: " << *easyfind(vec, 2) << std::endl;;
    try{
        std::cout << "Search for value 6 " << std::endl;
        easyfind(vec, 6);    
    } catch(const std::exception &e){
        std::cout << "Exception caught: " << e.what() << std::endl;}
}