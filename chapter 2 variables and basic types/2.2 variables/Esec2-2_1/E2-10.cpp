/*
 * Exercise 2.10: What are the initial values, if any, of earch of the following
 * variables?
 * std::string global_str;
 * int global_int;
 * int main() 
 * {
 *     int local_int;
 *     std::string local_str;
 * }
 *
 * global_str will be ""
 * both local_int and local_str will be undefined
 */
#include <iostream>

int global_int;
int main()
{
    int local_int;
    std::string local_str;
    std::cout << global_int << std::endl;
}

