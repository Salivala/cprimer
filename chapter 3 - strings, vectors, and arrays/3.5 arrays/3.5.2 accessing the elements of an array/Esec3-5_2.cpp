//
// Created by hayden on 7/2/18.
//
#ifndef ESEC3_5_2
#define ESEC3_5_2

#include <cstddef>
#include <iostream>
#include <vector>

/**
 * Exercise 3.30: Identify the indexing errors in the following code:
 * should start at 0. the = goes above the array amount as well
 */
 void exercise3_30()
{
    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t ix = 1; ix <= array_size; ++ix)
    {
        ia[ix] = ix;
        std::cout << ix << std::endl;
    }
    for (auto what : ia)
    {
        std::cout << what << std::endl;
    }
}

/**
 * Exercise 3.31: Write a program to define an array of ten ints. Give each element the same value
 * as its position in the array
 */
 void exercise3_31()
{
    constexpr size_t arrSize = 10;
    int ia[arrSize];
    for (size_t i = 0; i < arrSize; i++)
    {
        ia[i] = i;
    }
    for (auto thing : ia)
    {
        std::cout << thing << std::endl;
    }
}

/**
 * Exercise 3.32: Copy the array you defined in the previous exercise into another array.
 * Rewrite your program to use vectors.
 */
 void exercise3_32()
{
    std::vector<int> vStuff;
    for (int i = 0; i < 10; i++)
    {
        vStuff.push_back(i);
    }
    for (auto thing : vStuff)
    {
        std::cout << thing << std::endl;
    }
}

/**
 * Exercise 3.33: What would happen if we didn't initialize the array. IT would have
 * have been undefined
 */
#endif
