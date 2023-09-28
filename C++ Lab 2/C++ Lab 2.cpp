// C++ Lab 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <corecrt_math_defines.h>

class Cylinder
{
private:
	double radius;
	double height;

public:
	// construct
	Cylinder(double r, double h) : radius(r), height(h) {}

	// get methods
	double getRadius() const {
		return radius;
	}

	double getHeight() const {
		return height;
	}

	void setRadius(double r) {
		radius = r;
	}

	// set methods
	void setHeight(double h) {
		height = h;
	}

	// volume of cylinder
	double volume() const {
		return M_PI * radius * radius * height;
	}

	// surface area of cylinder
	double surfaceArea() const {
		return 2 * M_PI * radius * (radius + height);
	}

};

int main() {
	// object
	Cylinder myCylinder(50, 100);

	// display properties
	std::cout << "Radius: " << myCylinder.getRadius() << std::endl;
	std::cout << "Height: " << myCylinder.getHeight() << std::endl;
	std::cout << "Volume: " << myCylinder.volume() << std::endl;
	std::cout << "Surface Area: " << myCylinder.surfaceArea() << std::endl;

	return 0;
}