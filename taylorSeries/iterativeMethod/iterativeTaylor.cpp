#include <iostream>

double e(int x, int n)
{
    double s = 1;
    int i;
    double num = 1;
    double dem = 1;
    for (i = 1; i <= n; i++)
    {
        num *= x;
        dem *= i;
        s += num / dem;
    }
    return s;
}

int main()
{
    printf("%.2f ", e(2, 10));
    return 0;
}