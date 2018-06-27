//
// Created by hayden on 6/27/18.
//
#ifndef ESEC3_2_3
#define ESEC3_2_3

#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout;
using std::endl;


/*
 * Exercise 3.6: Use a range for to change all the characters in a string to x
 */
void exercise3_6()
{
    // Takes any string and replaces each character inside it with 'X'
    auto xify = [](string n)
    {
        for (auto &character : n)
        {
            character = 'X';
        }
        return n;
    };

    cout << xify("ll") << endl;
}


/*
 * Exercise 3.7: What would happen if you define the loop control variable in the
 * previous exercise as type char? Predict the results and then change your
 * program to use a char to see if you were right
 */
void exercise3_7()
{
    // Prediction, it will print the character codes?
    auto xify2 = [](string n)
    {
        for (char &character : n)
        {
            character = 'X';
        }
        return n;
    };
    cout << xify2("lll");
    // After run: ran just like it did in the last exercise
}

/*
 * Exercise 3.8: Rewrite the program in the first exercise, first using
 * a while and again using a traditional for  loop. which of the three
 * approaches do you prefer and why?
 */
void exercise3_8()
{
    auto e38_1 = [](string n)
    {
        decltype(n.size()) nCount = 0;
        while (nCount < n.size())
        {
            n[nCount] = 'X';
            nCount++;
        }
        return n;
    };

    auto e38_2 = [](string n)
    {
        for (decltype(n.size()) i = 0; i < n.size(); i++)
        {
            n[i] = 'X';
        }
        return n;
    };

    cout << e38_1("pls lol") << endl;
    cout << e38_2("pls lol") << endl;
}

/*
 * Exercise 3.9: What does the following program do?
 */
void exercise3_9()
{
    auto thing = []()
    {
        string s;
        cout << s[0] << endl;
    };
    thing();
}

/*
 * Exercise 3.10: Write a program that reads a string of characters
 * including punctuation and writes what was read but with the punctuation
 * removed
 */
void exercise3_10()
{
    auto punctuhate = [](string n)
    {
        string result;
        for (auto subject : n)
        {
            if (!ispunct(subject))
            {result += subject;}
        }
        return result;
    };
    cout << punctuhate("this 's's'ad'adw'wad'wad__codecvt_result '") << endl;
}

/*
 * Exercise 3.11: Is the following range for legal? If so, what is the type of c?
 */
void exercise3_11()
{
    /*
     * just as I thought! It's legal, because it turns c into a const char&
     */
    auto test = []()
    {
        const string s = "Keep out!";
        for (auto &c : s)
        {
        }
    };

}


#endif

