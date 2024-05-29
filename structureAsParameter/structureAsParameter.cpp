#include <iostream>

struct Rectangle{
    int length;
    int breadth;
};

int Area(struct Rectangle r) // Call by value
{
    std::cout << r.length << '\t' << r.breadth << std::endl;
    std::cout << r.length * r.breadth << std::endl;
}
int Perimeter(struct Rectangle *r) // Call by address
{
    std::cout << r->length << '\t' << r->breadth << std::endl;
    std::cout << 2 * (r->length + r->breadth) << std::endl;
}
struct test
{
    int A[5];
    int n;
};
void fun(struct test *t)
{
    // std::cout << t.A[0] << std::endl; 
    // std::cout << t.n << std::endl;
    std::cout << t->A[0] << std::endl;
    std::cout << t->n << std::endl;
}

struct Rectangle *structure() // returns a structure.
{
    struct Rectangle *p;
    p = new Rectangle; // dynamic memory allocation structure.
    p->length = 200;
    p->breadth = 500;
    return p;
}
int main()
{
    struct Rectangle r1;
    r1.length = 20; 
    r1.breadth = 30;

    Area(r1);
    Perimeter(&r1);

    struct test t1 = {{2,4,6,8,10}, 12};
    fun(&t1);

    struct Rectangle *p1 = structure(); // assignment to structure.
    std::cout << p1->length << '\t' << p1->breadth << std::endl; 

    return 0;
}