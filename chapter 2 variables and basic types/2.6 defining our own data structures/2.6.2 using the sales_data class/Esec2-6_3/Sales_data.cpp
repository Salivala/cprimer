#include "Sales_data.h"
#include <iostream>

int main()
{
    Sales_data data1, data2;

    double price = 0;

    std::cin >> data1.bookNo >> data1.units_sold >> price;
    std::cout << data1.bookNo << std::endl;
}
