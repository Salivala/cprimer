#include <iostream>

int exercise2_27()
{
    /*
     * Exercise 2.27: Which of the following initializations are legal? explain why
     * (a) int i = -1, &r = 0; : Illegal, non const reference referring to a literal.
     * (b) int *const p2 = &i2; : Legal, the pointer itself won't be able to change, but as long as i2 is within scope, this should work
     * (c) const int i = -1, &r = 0; : Illegal, non const reference referring to a literal.
     * (d) const int *const p3 = &i2; : Legal, assuming the i2 is within scope. 
     * (e) const int *p2 = &i2; : Legal, assuming i2 is within scope. 
     * (f) const int &const rs; : Illegal for two reasons - cannot have a &const reference, as it is not an object, 
     * and references to const need to be initialized immediately.
     * (g) const int i2 = i, &r = i; : Illegal, reference refers to a const without being a ref to const, if allowed would let changing of,
     * the const through ref.
     */

    // Scratchpad
    int k = 3;
    int p = k;
    p = ++p;
    return 2;
}

int exercise2_28()
{
    /*
     * Exercise 2.28: Explain the following definitions. Identify any that are illegal.
     * (a) int i, *const cp; : declare i as an int variable, create a const pointer cp. : Illegal,
     *     the *const pointer needs to be initialized. Otherwise it would be undefined.
     * --------------------------------------------------------------------------------------------
     * (b) int *p1, *const p2'; : Declare p1 as an int pointer, declare p2 as a const int pointer : 
     *     Illegal, p2 needs to be initialized.
     * --------------------------------------------------------------------------------------------
     * (c) const int ic, &r = ic; : Declare ic as an int without initialization, make int reference
     *     to const to ic. : This is legal because of the const before the series of definitions
     *     : Legal for second but first is illegal, unitialized int
     * --------------------------------------------------------------------------------------------
     * (d) const int *const p3; : Illegal, the pointer needs to be initialized. , this is because 
     *     of the *const part
     * --------------------------------------------------------------------------------------------
     * (e) const int *p; : Declare p as a pointer to const. This is fine, as the pointer itself
     *     can be reassigned to a different address. 
     *     : Legal
     * --------------------------------------------------------------------------------------------
     */
    return 0;
}

int exercise2_29()
{
    /*
     * Exercise 2.29: Using the variables in the previous exercise, which of the following 
     * assignments are legal? Explain why.
     * (a) i = ic; : Illegal, ic was never able to be declared, so this assignment will not work.
     * ---------------------------------------------------------------------------------------------
     * (b) p1 = p3; Illegal, again, because p3 was declared without initialization and was a const 
     *     pointer, this assignment fails.
     * ---------------------------------------------------------------------------------------------
     * (c) p1 = &ic;
     * ---------------------------------------------------------------------------------------------
     */
    //const int ic, &r = ic;
    return 0;
}

int main()
{
    std::cout << "exercise 2.27 scratchpad " << exercise2_27() << std::endl;
    std::cout << "exercise 2.28 scratchpad " << exercise2_28() << std::endl;
    std::cout << "exercise 2.29 scratchpad " << exercise2_29() << std::endl;
}
