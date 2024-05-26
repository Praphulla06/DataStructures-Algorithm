#include <iostream>
#include <stdlib.h>

struct Rectangle {
    int length;
    int breadth;
};

int main()
{
    // int a = 10;
    // int *p; // Declaration of pointer.
    // printf("%d\n", a);
    // p = &a; // Assignment of pointer. (Assigning address of a to p)
    // printf("Using pointer: %d\n", *p);

    // Pointer to an array. 
    // int A[5] = {2,4,6,8,10};
    // int *x;
    // x = A;
    // for (int i = 0; i < 5; i++)
    // {
    //     std::cout << *(x+i) << std::endl;
    // }

    // Declaration and definition of array using malloc
    // int *x;
    // x=(int *)malloc(5*sizeof(int));
    // x[0] = 0;
    // x[1] = 2;
    // x[2] = 4;
    // x[3] = 6;
    // x[4] = 8;
    // for (int i = 0; i < 5; i++)
    // {
    //     std::cout << *(x+i) << std::endl;
    // }

    // Dynamics Memory Allocation using C++ syntax.
    // int *x;
    // x = new int[5]; // C++ syntax for dynamic memory allocation.
    // x[0] = 0;
    // x[1] = 2;
    // x[2] = 4;
    // x[3] = 6;
    // x[4] = 8;
    // for (int i = 0; i < 5; i++)
    // {
    //     std::cout << *(x+i) << std::endl;
    // }
    
    // Freeing the memory allocated to variable.
    // delete [] x; // C++ syntax
    // free(p); // C syntax

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    std::cout << sizeof(p1) << std::endl;
    std::cout << sizeof(p2) << std::endl;
    std::cout << sizeof(p3) << std::endl;
    std::cout << sizeof(p4) << std::endl;
    std::cout << sizeof(p5) << std::endl;
    // Size of pointer is independent of its datatype.
    return 0;
}