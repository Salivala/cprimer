//
// Created by hayden on 7/2/18.
//
#ifndef CPRIMER_ESECTHREEFOURONE
#define CPRIMER_ESECTHREEFOURONE
#include <iostream>
#include <vector>
#include <string>
#include <cctype>

/**
 * Exercise 3.21: Redo the first exercise from 3.3.3(p.105) using iterators
 */
void exercise3_21()
{
    // stub
}

/**
 * what?
 */
void exercise3_22()
{

}

/**
 * Exercise 3.23: Write a program to create a vector with ten int elements. Using an
 * iterator, assign each element a value that is twice its current value. Test your
 * program by printing vector
 */
void exercise3_23()
{
    std::vector<int> intSet = {1,2,3,4,5,6,7,8,9,10};
    for (auto it = intSet.begin(); it != intSet.end(); it++)
    {
        *it = *it * 2;
    }
    for (int thing : intSet)
    {
        std::cout << thing << std::endl;
    }
}
#endif

