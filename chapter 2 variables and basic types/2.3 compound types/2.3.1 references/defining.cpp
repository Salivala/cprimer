#include <iostream>

int main()
{
    int x = {3};
    int &y = x;
    std::cout << y << std::endl;
}
