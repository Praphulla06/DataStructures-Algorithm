#include <stdio.h>

// int exponent_rcrs(int m, int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     return exponent_rcrs(m, n - 1) * m;
//}


int exponent_rcrs(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
        return exponent_rcrs(m*m, n / 2);
    else
        return m * exponent_rcrs(m*m, (n - 1) / 2);
}

int exponent_loop(int m, int n)
{
    if (n == 0)
        return 1;
    int i, result = 1;
    for(i = 1; i <= n; i++)
    {
        result *= m;
    }
    return result;
}

int main()
{
    printf("%d\n", exponent_rcrs(2, 15));
    printf("%d\n", exponent_loop(2, 15));
    return 0;
}