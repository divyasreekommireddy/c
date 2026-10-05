#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;   // Pure virtual function
};

class Circle : public Shape
{
public:
    void area()
    {
        float r;
        cout << "Enter radius of circle: ";
        cin >> r;
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape
{
public:
    void area()
    {
        float l, b;
        cout << "Enter length and breadth: ";
        cin >> l >> b;
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

class Triangle : public Shape
{
public:
    void area()
    {
        float b, h;
        cout << "Enter base and height: ";
        cin >> b >> h;
        cout << "Area of Triangle = " << 0.5 * b * h << endl;
    }
};

int main()
{
    Circle c;
    Rectangle r;
    Triangle t;

    c.area();
    r.area();
    t.area();

    return 0;
}
