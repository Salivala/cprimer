//
// Created by hayden on 7/2/18.
//
#ifndef CPRIMER_ESEC_3_5_1
#define CPRIMER_ESEC_3_5_1
#include <iostream>
#include <vector>
#include <cctype>
#include <string>
using std::vector;
using std::cout;
using std::endl;
using std::string;


/**
 * Exercise 3.27: Assuming txt_size is a function that takes no arguments and returns an int value,
 * which of the following definitions are illegal? EXPLAIN WHY!
 *
 * unsigned buf_size = 1024;
 * (a) int ia[buf_size]; = legal
 * (b) int ia[4 * 7 - 15]; = illegal, needs to be a constexpr : despite what
 * the book says, this seems legal in both clang and gcc.
 * (c) int ia[txt_size()]; = illegal unless the function returns a constexpr
 * (d) char st[11] = "fundamental" : illegal, not enough room for string terminator
 */
void exercise3_27()
{
}

/**
 * Exercise 3.28: What are the values in the following array?
 */
void exercise3_28()
{
}

void exercise3_29()
{
    /**
     * avoid arrays if you are not certain the size of the data you want to be using
     */
}

#endif
