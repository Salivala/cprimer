#ifndef ESEC3_2_2OHNOW
#define ESEC3_2_2OHNOW

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

void exercise3_2()
{
    // Exercise 3.2: Write a program to read the standard input a line at a time
    // Modify your program to read a word at a time.
    string input;

    cout << "danger dolan" << endl;

    while (cin >> input)
    {
        cout << input << " has been read" << endl;
    }
}

void exercise3_3()
{
    /*
     * Exercise 3.3: Explain how whitespace characters are handled in the string
     * input operator and in the getline function
     *
     * Answer : in string input operator spaces are used as seperate word delimiters, but are removed
     * In getline, spaces are reserved
     */
}

void exercise3_4()
{
    /*
     * Exercise 3.4: Write a program to read two strings and report whether the strings
     * are equal. If not, report which of the two is larger. Now, change the program to report whether
     * the strings have the same length, and if not, report which is longer.
     */


    auto are_strings_equal = [](const string first, const string second)
    {
        string result;
        if (first == second)
        {
            result = ("equal");
        }
        else
            first < second ? result = "first is smaller" : result = "first is greater";

        return result;
    };

    auto are_string_sizes_equal = [](const string first, const string second)
    {
        string result;
        if (first.size() == second.size())
        {
            result = ("equal size");
        }
        else
            first.size() < second.size() ? result = "first has smaller size" : result = "first has greater size";
        return result;
    };

    string f = "bc", s = "bb";
    cout << are_strings_equal(f,s) << endl;
    cout << are_string_sizes_equal(f,s) << endl;


}

void exercise3_5()
{
    auto concat_strings = []()
    {
        string input, final;
        while(cin >> input)
        {
            final += input;
        }
        cout << final << endl;
    };

    auto concat_strings_with_spaces = []()
    {
        string input, final;
        while(cin >> input)
        {
            final += + " " + input;
        }
        cout << final << endl;
    };

    concat_strings(); // wait for input here
    concat_strings_with_spaces(); // and then here
}


#endif

