#include <iostream>

using namespace std;
class  Rectangle 
{
    private:
        int length; 
        int breadth;
    public:
        Rectangle() // Default Constructors
        {
            length = 1;
            breadth = 1;
        }
        Rectangle(int l, int b); // Constructor Overloading

        int area();
        int perimeter();
        ~Rectangle();
};
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
int Rectangle::area()
{
    return length * breadth;
}
int Rectangle::perimeter()
{
    int p = 2 * (length + breadth);
    return p;
}
Rectangle:: ~Rectangle() // Destructors called automatically when main function ends
{

}
int main()
{
    Rectangle r(26,45); // Declare and Initialize
    cout << "Area: " << r.area() << " sqaure unit" << endl;
    cout << "Perimeter: " << r.perimeter() << " unit" << endl;
    return 0;
}

