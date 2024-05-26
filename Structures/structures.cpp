#include <iostream>

struct Rectangle // Definition of Structure.
{
    int length;
    int breadth;
    // char x;
};

// Global declaration of Structure.
// struct Rectangle r; 

int main()
{   
    // Local declaration of structure.
    struct Rectangle r1 = {10,5}; // Declaration of Structure
    // std::cout << sizeof(r1) << std::endl; 
    // printf("%lu", sizeof(r1)); // Printing using C syntax.

    // For character it allocates 4 bytes for character but only uses 1 byte.
    r1.length = 15;
    r1.breadth = 12;
    std::cout << r1.length << std::endl;
    std::cout << r1.breadth  << std::endl;
    
    return 0;
}