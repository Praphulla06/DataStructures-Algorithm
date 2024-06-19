#include <iostream>

void funB(int n);

void funA(int n)
{
    if (n > 0)
    {
        std::cout << n << " ";
        funB(n - 1);
    }
}

void funB(int n)
{
    if (n > 1)
    {
        std::cout << n << " " ;
        funA(n/2);
    }
}

int main()
{
    int x = 20;
    funA(x);
    return 0;
}