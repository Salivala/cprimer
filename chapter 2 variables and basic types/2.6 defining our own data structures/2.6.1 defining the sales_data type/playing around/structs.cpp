#include <iostream>

int main()
{
    struct person 
    {
        std::string name;
        unsigned age;
        int getage()
        {
            return age;
        }
    } *personptr;

    person bill;
    bill.name = "hey!";
    bill.age = 3;
    std::cout << bill.name << std::endl;
    std::cout << bill.getage() << std::endl;
    personptr = &bill;
}
