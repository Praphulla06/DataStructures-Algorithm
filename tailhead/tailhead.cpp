#include <iostream>

void fun1(int n) // Tail recursion
{
    if (n > 0)
    {
        printf("%d ", n);
        fun1(n-1);
    }
}

void fun2(int n) // Head recursion
{
    if (n > 0)
    {
        fun2(n-1);
        printf("%d ", n);
    }
}

int main()
{
    int x = 3;
    fun1(x);
    printf("\n");
    fun2(x);
    return 0;
}