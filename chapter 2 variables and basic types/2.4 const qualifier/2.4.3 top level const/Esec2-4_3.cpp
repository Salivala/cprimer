#include <iostream>
int exercise2_30()
{
    /*
     * Exercise 2.30: For each of the following declerations indicate whether the object being declared
     *                has top-level or low-level const.
     * ================================================================================================
     * const int v2 = 0; : Top level
     * int v1 = v2;  left is neither right is top level, because of assignment it doesn't matter though
     * 
     * int *p1 = &v1, &r1 = v1;  all top level assignments
     *
     * const int *p2 = &v2, *const p3 = &i, &r2 = v2;
     * *p2 assignment is a low level const
     * p3 assignment is low and top level consts.
     * r2 assignment is low level const
     */
    const int v2 = 0;
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    r1 = v2;
    return r1;
}

int exercise2_31()
{
    /*
     * Exercise 2.31: Given the declarations in the previous exercise determine whether the following
     * assignments are legal. Explain how the top-level or low-level const applies in each case.
     *
     * r1 = v2; : because v2 was a top level const, which was copied to v1, v1 isn't a const at all
     * p1 = p2; : wouldn't work, because p2 has a low level const.
     * p2 = p1; : would work because even though p2 is a low level const, pointers to const do not,
     * have to point to a const object
     * p1 = p3; : wouldn't work. p3 is also a low level ( + top level ) const
     * p2 = p3 : would work, top level const is ignored in copies
     */
    const int v2 = 0;
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2;
    r1 = v2;

    return 0;
}

int main()
{
    std::cout << exercise2_30() << std::endl;
    std::cout << exercise2_31() << std::endl;
} 
