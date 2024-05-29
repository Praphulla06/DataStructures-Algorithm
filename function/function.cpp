#include <iostream>

int add (int a, int b) // Prototyping (Declaration) of a function.
{
    // Defining of a function.
    int c;
    c = a + b;
    return c; // Returning a value (Sum)
}

int main()
{
    int num1 = 10, num2 = 15, sum;
    sum = add(num1, num2); // Calling a function
    printf("Sum: %d", sum);
    return 0;
}