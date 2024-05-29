#include <iostream>

void print(int *A, int n)
{
    for (int i = 0; i < n; i++)
        std::cout << *(A + i) << '\t' << std::endl;
}

int *fun(int n) // Function returning an Array
{
    int *p;
    p = new int[n];
    return p;
}

int main()
{
    int A[] = {2, 4, 6, 8, 10};
    print(A, 5);

    int *B;
    B = fun(5);
    B[0] = 12;
    B[1] = 121;
    B[2] = 122;
    B[3] = 123;
    B[4] = 124;
    print(B, 5);
    return 0;
}