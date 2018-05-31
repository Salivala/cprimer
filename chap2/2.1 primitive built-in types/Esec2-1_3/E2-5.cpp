/*
 * Determine the type of earch of the following literals. Explain the differences
 * among the literals in each of the four examples:
 *
 *
 * (A) 'a' L'a', "a", L"a"
 * a is a character, L'a' is a wide character, 
 * "a" is a string L"a" is a wide string
 *
 * 
 * (B)  10, 10u, 10L, 10 uL, 012, Oxc
 * 10 is a 16bit int 10u is a 16bit unsigned int
 * 10L is a 32 bit signed int
 * 012 is a octal, OXc is a hexadecimal thing
 *
 * (C) 3.14 : double , 3.14f : float, 3.14Long
 *
 *
 */
#include <stdint.h>
#include <iostream>

int main()
{
    int64_t k {2};
    std::cout << k << std::endl;
}
