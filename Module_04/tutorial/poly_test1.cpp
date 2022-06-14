#include <iostream>

class Shape {
    protected:
        int width;
        int height;

    public:
        Shape(int a = 0, int b = 0) {
            width = a;
            height = b;
        }
        virtual int area () {
            std::cout << "Parent class area: " << std::endl;
            return 0;
        }
};

class Rectangle : public Shape {
    public:
        Rectangle(int a = 0, int b = 0) : Shape (a,b) {
            width = a;
            height = b;
        }
        int area () {
            std::cout << "Rectangle class area: ";
            return (width * height);
        }
};

class Triangle : public Shape {
    public:
        Triangle(int a = 0, int b = 0) : Shape (a,b) {
        }
        int area () {
            std::cout << "Triangle class area: ";
            return (width * height / 2);
        }
};

int main()
{
    Shape *shape;

    Rectangle rec (2,4);
    Triangle tri (5,10);

    shape = &rec;
    std::cout << "Rec area is: " << shape->area() << std::endl;

    shape = &tri;
    std::cout << "Tri area is: " << shape->area() << std::endl;

    return 0;
}