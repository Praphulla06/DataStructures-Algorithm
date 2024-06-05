#include <iostream>

template <class T> // Template class
class Arithmetic
{
private:
    T a;
    T b;

public:
    Arithmetic(T a, T b); // Constructor
    T add();
    T sub();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T>::add()
{
    T c;
    c = a + b;
    return c;
}

template <class T>
T Arithmetic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}

int main()
{
    Arithmetic<int> ar(10, 5);
    std::cout << "Add: " << ar.add() << std::endl;

    Arithmetic<float> ar1(1.8, 1.2);
    std::cout << "Subtract: " << ar1.sub() << std::endl;

    Arithmetic<double> ar2(2.40, 46);
    std::cout << "Add: " << ar2.add() << std::endl;
    return 0;
}