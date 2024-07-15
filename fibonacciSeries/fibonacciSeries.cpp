#include <iostream>

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
    int x = 10;
    printf("%d\n", fibonacci(x));
    return 0;
}