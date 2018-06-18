#include <iostream>


int get_size()
{
    return 4;
}

int r()
{
    const int &devils_number = 666;
    std::cout << devils_number << std::endl;
    return 0;
}

int main()
{
    int null = 0, *p = &null;
}
