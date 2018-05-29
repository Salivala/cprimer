/*
 * Exercise 2.17: What does the following code print?
 * int i, &ri = i;
 * i = 5;
 * ri = 10;
 * std::cout << i << " " << ri << std::endl;
 * answer prints 10 10
 */
#include <iostream>

int main()
{
    int i, &ri = i;
    i = 5;
    ri = 10;
    std::cout << i << " " << ri << std::endl;
}
