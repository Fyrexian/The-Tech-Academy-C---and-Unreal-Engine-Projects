#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Shape {

public:
    string color;
    double getArea() { return 0; }
    string getColor() { return color; }
};

class Rectangle : public Shape {
public:
	double width;
	double height;

	Rectangle(string color, double width, double height) {
		this->color = color;
		this->width = width;
		this->height = height;
	}

	double getArea() {
		return width * height;
	}
};

class Triangle : public Shape {
public:
	double base;
	double height;

	Triangle(string color, double base, double height) {
		this->color = color;
		this->base = base;
		this->height = height;
	}

	double getArea() {
		return 0.5 * base * height;
	}
};

class Circle : public Shape {
public:
	double radius;

	Circle(string color, double radius) {
		this->color = color;
		this->radius = radius;
	}

	double getArea() {
		return 3.14159 * pow(radius, 2);
	}
};


int main()
{
    Rectangle rect("Red", 5.0, 4.0);
    Triangle tri("Blue", 3.0, 4.0);
    Circle circ("Green", 2.0);

    cout << "Rectangle color: " << rect.getColor() << ", Area: " << rect.getArea() << endl;
    cout << "Triangle color: " << tri.getColor() << ", Area: " << tri.getArea() << endl;
    cout << "Circle color: " << circ.getColor() << ", Area: " << circ.getArea() << endl;

    return 0;
}
