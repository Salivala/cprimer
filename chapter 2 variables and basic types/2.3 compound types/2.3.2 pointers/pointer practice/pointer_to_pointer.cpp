#include <iostream>

int main()
{
    int k = {3};
    int *kp = &k;
    int **kpp = &kp;
    std::cout << **kpp << std::endl;
}
