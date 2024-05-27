#include <iostream>
#include <stdlib.h>

struct Rectangle {
    int length;
    int breadth;
};

int main()
{
    // Rectangle r = {10,5}; // struct is not mandatory while declaring a structure.
    // std::cout << r.length << std::endl;
    // std::cout << r.breadth << std::endl;

    // Rectangle *p = &r;
    // std::cout << p->length << std::endl;
    // std::cout << p->breadth << std::endl;

    Rectangle *p;
    // p = (struct Rectangle *) malloc(sizeof(struct Rectangle)); // C syntax
    p = new Rectangle; // C++ syntax.

    p->length = 10;
    p->breadth = 15;

    std::cout << p->length << std::endl;
    std::cout << p->breadth << std::endl;
    

    return 0; 
}