//Program 4 : Program to find area of circle and rectangle using virtual function
#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    virtual void area()
    {
        cout << "Area of Shape" << endl;
    }
};

// Derived class - Circle
class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area()
    {
        cout << "Area of Circle = "<< 3.14 * radius * radius << endl;
    }
};

// Derived class - Rectangle
class Rectangle : public Shape
{
private:
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    void area()
    {
        cout << "Area of Rectangle = "<< length * breadth << endl;
    }
};

int main()
{
    Shape *ptr;

    Circle c(5);
    Rectangle r(10,6);

    ptr = &c;
    ptr->area();

    ptr = &r;
    ptr->area();

    return 0;
}
