#include <iostream>

// Sum of n natural numbers using formula
int sum_frml(int n)
{
    return n * (n + 1) / 2;
}

// Sum of n natural numbers using loop
int sum_loop(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

// Sum of n natural numbers using recursion
int sum_rcurs(int n)
{
    if (n == 0)
        return 0;
    return sum_rcurs(n - 1) + n;
}

int main()
{
    std::cout << sum_frml(120) << std::endl;
    std::cout << sum_loop(120) << std::endl;
    std::cout << sum_rcurs(120) << std::endl;
    return 0;
}