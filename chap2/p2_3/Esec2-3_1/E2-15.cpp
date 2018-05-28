/*
 * Exercise 2.15: Which of the following definitions, if any, are invalid?
 * Why?
 * (a) int ival = 1.01;
 * valid, defining an int called ival and initializing it to 1.01
 * (b) int &rval = 1.01;
 * invalid, attempt to make a reference to a literal, which is NOT an object
 * (c) int &rval2 = ival
 * valid, makes a reference to int, which is a variable that can be referenced
 * (d) int &rval3; 
 * invalid, references must be initialized with an object to link to 
 */
#include <iostream>

int main() 
{
    int ival = {1};
    int &rval2 = {ival};
    rval2 = {3};
    std::cout << ival << std::endl;
}
