#include <iostream>

using namespace std;
class  Rectangle 
{
    private:
        int length; 
        int breadth;
    public:
        Rectangle(int l, int b)
        {
            length = l;
            breadth = b;
        }
        int area()
        {
            return length * breadth;
        }
        int perimeter()
        {
            int p = 2 * (length  + breadth);
            return p;
        }
};
int main()
{
    Rectangle r(26,45); // Declare and Initialize
    cout << "Area: " << r.area() << " sqaure unit" << endl;
    cout << "Perimeter: " << r.perimeter() << " unit" << endl;
    return 0;
}