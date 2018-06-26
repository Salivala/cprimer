#include <iostream>
#include "../sales_data.h"

int main()
{
    double price = 0;
    sales_data data1, data2;
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
}
