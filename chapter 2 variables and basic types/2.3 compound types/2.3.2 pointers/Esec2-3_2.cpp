#include <iostream>

int main()
{

    /*
     * Exercise 2.18: Write code to change the value of a pointer. Write code to change the value to which the pointer
     * points
     */
    int *p = {nullptr};
    int s = {9}, s2 = {3};
    p = &s;
    std::cout << "*p's first value is " << *p << std::endl;
    p = &s2;
    std::cout << "*p's second value is " << *p << std::endl;

    *p = {9};

    std::cout << "s2's now equal to " << s2 << " from 3" << std::endl;

    /*
     * Exercise 2.19 : Explain the key differences between pointers and references
     *
     * Pointers are objects that can point to different objects during their lifespan, allowing callers to indirectly change the pointed at object
     * References are not object, and are essentially another name for an object, unable to be changed during its lifespace
     */

    /*
     * Exercise 2.20 : What does the following program do?
     * int i = 42;
     * int *p1 = &i;
     * *p1 = *p1 *  *p1;
     *
     * squares i
     */

     int i = 42;
     int *p1 = &i;
     *p1 = *p1 * *p1;
     std::cout << i << std::endl;
}
