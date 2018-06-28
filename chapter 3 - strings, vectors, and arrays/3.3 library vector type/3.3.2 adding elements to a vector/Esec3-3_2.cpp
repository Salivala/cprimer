#ifndef ESEC2232CPP
#define ESEC2232CPP

#include <iostream>
#include <vector>
#include <cctype>


using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

void exercise3_14()
{
    vector<int> inputs;
    int input;
    while(cin >> input)
    {
        inputs.push_back(input);
    }
    for (auto n : inputs)
    {
        cout << n << endl;
    }
}

void exercise3_15()
{
    vector<string> inputs;
    string input;
    while(cin >> input)
    {
        inputs.push_back(input);
    }
}

#endif