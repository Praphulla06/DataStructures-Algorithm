#include <iostream>

int comb(int n, int r)
{
    if (r == 0 || n == r)
    {
        return 1;
    }
    return comb(n - 1, r - 1) + comb(n - 1, r);
}

int main(void)
{
    std::cout << comb(5,3) << std::endl;
    return 0; 
}