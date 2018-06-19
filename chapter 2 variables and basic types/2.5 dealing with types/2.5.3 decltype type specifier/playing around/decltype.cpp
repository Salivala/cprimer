#include <iostream>

int main()
{
    decltype(3 * 92) k = 4;
    int test = 3;
    int *testptr  = &test;
    decltype(testptr) n = &k;
    std::cout << *n << std::endl;
}
