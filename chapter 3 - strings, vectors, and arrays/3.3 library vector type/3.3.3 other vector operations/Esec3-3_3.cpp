//
// Created by hayden on 6/28/18.
//
#ifndef ESEC333
#define ESEC333
#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <random>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;
/**
 * Exercise 3.16: Write a program to print the size and contents of the vectors
 * from exercise 3.13. Check whether your answers to that exercise were correct.
 * If not restudy
 */
void exercise3_16()
{
    /**
     * did this while i was doing the exercise
     */
}

/**
 * Exercise 3.17: Read a sequence of words from cin and store the values in a vector.
 * After you've read all the words, process the vector and change each word to
 * uppercase. Print the transformed elements, eight words to a line.
 */
void exercise3_17()
{
    vector<string> words;
    string inWord;
    while (cin >> inWord)
    {
        words.push_back(inWord);
    }
    for(string &word : words)
    {
        for (char &character : word)
        {
            character = (char)toupper(character);
        }
    }
    for (int i = 0; i < words.size() ;i++)
    {
        if (i % 8 == 0 && i != 0)
        {
            cout << endl;
            cout << " " << words[i];
        }
        else
        {
            cout << " " << words[i];
        }
    }
    cout << endl;

}

void exercise3_18()
{
    /**
     * Exercise 3.18: Is the following program legal? I not, how might you fix it?
     * vector<int> ivec;
     * ivec[0] = 42;
     * Illegal, subscript does not make the element.
     * Use push back or something to make the element
     * ivec.push_back(42);
     * Now you can access it by the subscript
     * ivec[0] = 33; or something
     */
}

void exercise3_19()
{
    /**
     * two is there initialization, third is using push_back repeatedly
     */
}

void exercise3_20()
{
    auto first = []()
    {
        vector<int> things = {12, 22, 9, 76, 5, 33, 22, 44};
        if (things.size() % 2 == 1)
        {
            cout << "odd vector can't be divided into pairs";
            return;
        }
        for(int i = 0; i < things.size() ; i+=2)
        {
            cout << things[i] + things[i + 1] << " ";
        }
        cout << endl;
    };

    auto second = []()
    {
        vector<int> things = {12, 22, 9, 76, 10000, 33, 22, 44};
        if (things.size() % 2 == 1)
        {
            cout << "odd vector can't be divided into pairs";
            return;
        }
        for(int i = 0; i < things.size() / 2 ; i++)
        {
            cout << things[i] + things[(things.size() - 1) - i] << " ";
        }
        cout << endl;
    };


    first();
    second();

}

#endif
