#include <iostream>

int factorial_rcrs(int n)
{
    if (n < 0)
    {
        return -1;
    }
    else if (n == 0)
    {
        return 1;
    }
    return factorial_rcrs(n - 1) * n;
}

int factorial_loop(int n)
{
    int i;
    int result = 1;
    if (n < 0)
    {
        return -1;
    }
    for (i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

int main()
{
    int x = -1;
    int fact = factorial_rcrs(x);
    std::cout << "Factorial of " << x << " using recursion is " << fact << std::endl;
    fact = factorial_loop(x);
    std::cout << "Factorial of " << x << " using loop is " << fact << std::endl;
    return 0;
}