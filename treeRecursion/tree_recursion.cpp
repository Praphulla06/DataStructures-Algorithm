#include <iostream>

void fun(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        fun(n - 1); // Tree recursion
        fun(n - 1);
    }
}

int main()
{
    int x = 3;
    fun(x);
    return 0;
}