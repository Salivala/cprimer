/*
 * Exercise 2.6: Which, if any, of the following assignments are invalid? If 
 * they are valid, explain what they do.
 *
 * int i = 0, &r1 = i; double d = 0, &r2 = d;
 * 
 * (a) r2 = 3.14159;
 * Valid, this should work because all this is is reasignment to the object
 * r2 is referencing.
 *
 * (b) r2 = r1;
 * Valid, what is really being said here is we're assigning the valud of r1 
 * (i, which is 0), to r2 ( which is d also 0 ) 
 *
 * (c) i = r2;
 * Valid, it assigned the value from r2 ( d) to i
 *
 * (d) r1 = d;
 * valid it assigned the value of d (0 ) to r1 ( i) 
 */

#include <iostream>

int main()
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;
    r2 = 3.145;
    r2 = r1;
    i = r2;
    r1 = d;
}
