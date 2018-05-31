/*
 * (a) int double = 3.14;
 * Not valid, double is a reserved keyword
 * (b) int _;
 * Valid name because a variable can start with an underscore
 * (c) int catch-22;
 * Invalid because of the hyphen not being valid in a variable
 * (d) int 1_or_2
 * doesn't work, starts with a number
 * (e) double Double = 3.14
 * Should work, Double is not a reserved keyword
 */
#include <iostream>
int k = 3;
int main()
{
    int k = 4;
    std::cout << k << std::endl;
}
