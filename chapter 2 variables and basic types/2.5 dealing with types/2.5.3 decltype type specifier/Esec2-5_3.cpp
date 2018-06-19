#include <iostream>

int exercise2_36()
{
    /*
     * Exercise 2.36: In the following code, determine the type of each variable and the value each variable
     * has when the code finishes: 
     * int a = 3, b = 4; : both integers
     * decltype(a) c = a; : all are ints. c is 3 and a is 3
     * decltype((b)) d = a; : d is a reference to a and a is still an int (d is &d = a)
     * ++c;  
     * ++d;
     */
    int a = 3, b = 4;
    decltype((a)) c = a;
    a = 123142;
    std::cout << "c is " << c << std::endl;
    return 0;
}

int exercise2_37()
{
    /*
     * Exercise 2.37: Assignment is an example of an expression that yields a reference type.
     * The type is a reference to the type of the left-hand operand. That is, if i is an int,
     * then the type of the expression i = x is int&. Using that knowledge, determine the type
     * and value of each variable in this code:
     *
     * int a = 3, b = 4; : a and b are ints
     * decltype(a) c = a; c is an int 
     * decltype(a = b) d = a; d is a reference to a
     */ 
    int a = 3, b = 4; 
    decltype(a) c = a;
    decltype(a = b) d = d;
    return 0;
}

int exercise2_38()
{
    /*
     * Exercise 2.38: Describe the differences in type deduction between decltype and auto.
     * Give an example of an expression where auto and decltype will deduce the same type
     * and an example where they will deduce differing types
     *
     * decltype maintains the top level const of the variables involved.
     * 
     * example where they are the same
     * const int k = 3;
     * decltype(k) n = 2; : this maintains top level const
     * auto will not do this
     *
     * An example where they are the same
     * int n = 3;
     * decltype(n) r = 2; : lets r be an int
     * auto r = n; : lets r be an int
     */
    return 0;
}
int main()
{
    exercise2_36();
}
