#include <iostream>
int main()
{
    int r = 3;
    const int &n3 = 43;
    const int &r3 = r ;
    const int &nochangeR = r;
    r = 4;
    std::cout << r3 << std::endl;
}
