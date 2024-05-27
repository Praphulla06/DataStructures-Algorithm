#include <iostream>

int main()
{
    int a = 10;

    int &r = a; // r = a = 10
    std::cout << a << std::endl; // 10
    std::cout << r << std::endl; // 10
    r++; // 11
    std::cout << a << std::endl; // 11 
    std::cout << r << std::endl; // 11 

    return 0; 
}