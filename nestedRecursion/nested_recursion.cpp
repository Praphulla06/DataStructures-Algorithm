#include <stdio.h>

int fun(int n)
{
    if (n > 100)
    {
        return n - 10;
    }
    else
    {
        return fun(fun(n+11)); // nested recursion
    }
}

int main()
{
    int x = 95;
    printf("%d ", fun(x)); 
}