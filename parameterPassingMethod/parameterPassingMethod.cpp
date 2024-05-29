#include <iostream>

// Call by value
// void swap(int x, int y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
// }

// Call by address
// void swap(int *x, int *y)
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }

// Call by reference
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 10, b = 20;
    // swap(a,b); // Call by Value
    // swap(&a,&b); // Call by Address
    swap(a,b); // Call by reference
    std::cout << a << '\t' << b << std::endl;
    return 0;
}