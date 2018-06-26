#include <iostream>
#include <string>
#include "sales_data.h"


int main()
{
    Sales_data n;
    n.bookNo = "banana!";
    std::cout << n.bookNo << std::endl;
    std::cerr << "error!" <<std::endl;
}
