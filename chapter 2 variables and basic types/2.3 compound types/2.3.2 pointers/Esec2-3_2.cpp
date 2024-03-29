#include <iostream>


int exercise2_18()
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
    
    return 0;
}

int exercise2_19()
{
    /*
     * Exercise 2.19 : Explain the key differences between pointers and references
     *
     * Pointers are objects that can point to different objects during their lifespan, allowing callers to indirectly change the pointed at object
     * References are not object, and are essentially another name for an object, unable to be changed during its lifespace
     */
    return 0;
}

int exercise2_20()
{
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

     return 0;
}

int exercise2_21()
{
     /*
      * Exercise 2.21
      * Explain each of the following definitions. Indicate whether any are illegal and, if so, why
      * int i = 0;
      * (a) double* dp = &i; (b) int *ip = i; (c) int *p = &i
      * a. Illegal, double has an asterisk at the end of it
      * b. Illegal, while the pointer is of the same type as the variable it's pointing to, it's not actually going to work because the types are different, 
      *
      */

    return 0;
}

int exercise2_22()
{
    /*
     * Exercise 2.22 : Assuming p is a pointer to int, explain the following code;
     * if (p) // ..
     * if (*p) 
     * is p is 0, it is false
     * if (*p) is 0 it is false.
     */
}

int exercise2_23()
{
    /*
     * Given a pointer p, can you determine whether p points to a valid object?
     * if so, how? If not, why not?
     * No, you can determine if a pointer points to an object, but a valid object is meta data that's not available
     */
}

int exercise2_24()
{
    /*
     * Why is the initialization of p legal but that of lp illegal?
     * int i = 42; void *p = &i; long *lp = &i
     * p is legal because it can reference any object, while lp is incompatible types
     */
}

int main()
{
    exercise2_18();
    exercise2_19();
    exercise2_20();
    exercise2_21();
    exercise2_22();
    exercise2_23();
}
