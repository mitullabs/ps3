// Program 2 : Calculating area using function overloading
#include <iostream>
using namespace std;

class Area
{
public:
    // Circle: one parameter
    float calculateArea(float radius)
    {
        return 3.14 * radius * radius;
    }

    // Rectangle: two parameters
    int calculateArea(int length, int breadth)
    {
        return length * breadth;
    }

    // Square: one parameter with a different type
    double calculateArea(double side)
    {
        return side * side;
    }
};

int main()
{
    Area obj;

    cout << "Area of Circle = "<< obj.calculateArea(5.5) << endl;

    cout << "Area of Rectangle = "<< obj.calculateArea(10,5) << endl;

    cout << "Area of Square = "<< obj.calculateArea(4.6) << endl;

    return 0;
}
