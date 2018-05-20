#include <iostream>

int main()
{
    std::cout << 017777 << std::endl; // Octal
    std::cout << 0xF374 << std::endl; // Hexidecimal

    std::cout << -1234u << std::endl; // will print a huge number as literal is
    //being interpreted as unsigned
    //
    std::cout << u'b' << std::endl;

    std::cout << "here is a bunch of escaped stuff"
        "\n woohoo!  \t what is this \t neat! \n another!" 
        "let's agooo!"<< std::endl;

    std::cout << '\n' << std::endl;

    std::cout << u8"hi!" << std::endl;
}

