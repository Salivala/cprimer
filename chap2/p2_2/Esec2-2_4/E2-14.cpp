/*
 * Is the following program legal? If so, what values are printed?
 * int i = 100, sum = 0;
 * for (int i = 0; i != 10; ++i)
 * sum += i; 
 * std::cout << i << " " << sum << std::endl;
 * A: 100 10 sum
 * Was wrong with second number, was 45
 * 
 */

#include <iostream>

int main() 
{
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
        sum += i;
    std::cout << i << " " << sum << std::endl;
}
