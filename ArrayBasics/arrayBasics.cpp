#include <iostream>

int main()
{
    int A[5];
    A[0] = 12;
    A[1] = 34;

    std::cout << "The size of array A: " << sizeof(A) << std::endl;
    std::cout << "The element present in the index 0 of array A: " << A[0] << std::endl;
    printf("%d\n", A[1]); //C syntanx (printf) can also be used in C++

    // ************************************************************** //

    int B[10] = {2,4,6,8,10}; // Initializing the array at declaration time.
    std::cout << "The size of array A: " << sizeof(B) << std::endl; 
    std::cout << B[8] << std::endl; // Index where the values are not assigned the values at those index are 0.

    // ************************************************************** //

    int C[5] = {1,3,5,7,9};
    for (int i = 0; i < 5; i++)
    {
        std::cout << C[i] << std::endl; // Printing all the elements in the array.
    }
    std::cout << std::endl;

    // ************************************************************** //

    int D[10] = {1,2,3,4,5};
    // Printing elements of array using for-each loop.
    for(int x : D)
    {
        std::cout << x << std::endl;
    }

    // ************************************************************** //
    
    int n;
    std::cout << "Size: " << std::endl;
    std::cin >> n;

    int E[n]; // Cannot initialize in variable array length.
    E[0] = 12; // Rest of the elements in the array will have garbage value not 0.
    for (int i = 0; i < n; i++)
    {
        std::cout << E[i] << std::endl; 
    }

    return 0;
}