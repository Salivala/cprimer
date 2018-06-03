#include <iostream>

int main()
{
    /*
     * Exercise 2.26: Which of the following are legal? For those that are illegal, explain why.
     *
     * (a) const int buf; (b) int cnt = 0; (c) const int sz = cnt; (d) ++cnt; ++sz
     * a. Illegal, must initialize a const
     * b. legal, not a const and is being initialized
     * c. legal, cnt is copying its value into sz
     * d. illegal for sz and legal for cnt. cnt is still a const
     */

     //const int buf; 
     int cnt = 0; 
     const int sz = cnt; 
     ++cnt; 
     //++sz;
}
