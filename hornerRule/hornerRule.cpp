#include <iostream>
double e(int x, int n)
{
    static double s = 1;
    if (n == 0)
        return s;
    s = 1 + x * s / n;
    return e(x, n - 1);
}

int main()
{
    printf("%0.5lf ", e(2, 5));
    return 0;
}