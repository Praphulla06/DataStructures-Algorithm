#include <iostream>
// int a = 0;
int func1(int n)
{
    static int a = 0; // value of static  variable 'a' does not assign to 0 on each call.
    if (n > 0)
    {
        a++; // 1
        return func1(n - 1) + a; 
        // func(4) + 1 ... 14 + 1
        // func(3) + 2 ... 12 + 2
        // func(2) + 3 ... 9 + 3
        // func(1) + 4 ... 5 + 4
        // func(0) + 5 ... 0 + 5 => a = 5
    }
    return 0;
}

int main()
{
    int x = 5;
    std::cout << func1(x) << std::endl;
    std::cout << func1(x) << std::endl;
    return 0;
}