#include <iostream>

int main()
{
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    // should be 32
    
    std::cout << u - u2 << std::endl;
    // An unsigned integer that is negative will flip the bit however many
    // negative places it is
    
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    // should be 32
    
    std::cout << i - i2 << std::endl;
    // should be -32
    
    std::cout << i - u << std::endl;
    //I think because the first operand is an integer the second will caste
    //to a signed integer? oh derp it's 0 anyways
    
    std::cout << u - i << std::endl;
    // Will probs be a huge number casting to an unsigned.. nvm they're both 10
    // you can have an unsigned 0 value
    

}
