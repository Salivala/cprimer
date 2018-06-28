#ifndef ESEC331
#define ESEC331

#include <iostream>
#include <vector>
#include <cctype>
using std::cout;
using std::endl;
using std::vector;
using std::string;

/**
 * Exercise 3.12: Which, if any, of the following vector definitions are in error?
 * For those that are legal, explain what the definition does. For those that
 * are not legal, explain why they are illegal.
 * 
 * (a) vector<vector<int>> ivec; // fine, 0 size vector of vector<int>'s
 * (b) vector<string> svec = ivec;  // error, expected a vector full of tr
 * strings
 * (c) vector<string> svect(10, "null"); //  should be fine, creates a vect with 10 null strings
 */
void exercise3_12() 
{
    // vector<vector<int>> ivec; -- right
    //vector<string> svec = ivec; -- right
    vector<string> svect(10, "null");
    for (auto k : svect)
    {
        cout << k << endl;
    } // right as well!
}

/**
 * Exercise 3.13: How many elements are there in each of the following vectors? What
 * are the values of the elementS?
 * (a) vector<int> v1;  // none
 * (b) vector<int> v2(10);  // ill guess 1, containing 10
 * (c) vector<int> v3(10, 42);
 * (d) vector<int> v4{10};
 * (e) vector<int> v5{10,42};
 * (f) vecotr<string> v6{10};
 * (g) vector<string> v7{10, "hi"};
 */
void exercise3_13()
{
    //vector<int> v1;
    //cout << v1.size() << endl; // right!
    vector<int> v2(10); // wrong 
    cout << v2.size() << endl;
}
#endif