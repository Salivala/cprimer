#include <iostream>

int main()
{
    typedef int number, *numberpointer, &numberref; // make aliases for int variables, int pointers, and int references
    number r = 9;
    numberpointer p = &r;
    numberref k = r;
}
