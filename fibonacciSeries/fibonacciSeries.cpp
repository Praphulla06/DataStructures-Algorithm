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
    int x = 20;
    // printf("%d\n", fibonacci(x)); // Recursive Method -> gets the nth term


    // Iterative method -> prints n terms in fibonacci series
    int a = 0, b = 1, c;
    printf("%d \n%d \n", a, b);
    for (int i = 2; i <= x; i++)
    {
        c = a + b;
        printf("%d \n", c);
        a = b;
        b = c;
    }


    return 0;
}