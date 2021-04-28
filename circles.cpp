/*
Get radius, area, diameter and circumference of a circle
 Use pointers to get memory address of an object to:
 1. call a function within the class using the memory address
 2. dynamically allocate memory and delete after the task
*/

#include <iostream>
using namespace std;

//Circle class declaration
class Circle{
	private:
		double radius;
		double pi = 3.14159;
	public:
		void setRadius(double);
		double getRadius() const;
		double getArea() const;
		double getDiameter() const;
		double getCircumference() const;
};

//setRadius assigns a value to the radius member.
void Circle::setRadius(double r){
	radius = r;
}

//getRadius returns the value in the radius member.
double Circle::getRadius() const{
	return radius;
}

//getArea returns the product of pi times the radius sqaured.
double Circle::getArea() const{
	return pi * radius * radius;
}

//getDiameter returns the product of 2 times the radius
double Circle::getDiameter() const{
	return 2 * radius;
}

//getCircumference returns the product of 2 times pi times the radius
double Circle::getCircumference() const{
	return 2 * pi * radius;
}

int main(){
	Circle circle;
	double rad;

	cout << "What value do you want to set the radius to? ";
	cin >> rad;

	//stores the radius of circle in the circle object
	circle.setRadius(rad);

	//displays circle's data
	cout << "Here is the circle's data after setting the radius to " << rad << ": " << endl;
	cout << "Radius: " << circle.getRadius() << endl;
	cout << "Diameter: " << circle.getDiameter() << endl;
	cout << "Area: " << circle.getArea() << endl;
	cout << "Circumference: " << circle.getCircumference() << endl;

    //assigns memory address of the object to a pointer and calls set radius and get area using it
    Circle * circlePtr;
	circlePtr = &circle;
	circlePtr -> setRadius(15);
	double radius = circlePtr -> getArea();
	cout << "Area after setting radius to 15: " << radius << endl;

    //dynamically allocates memory to a new ptr and then calls set radius and get area using it. deletes the memory once the task is done
	Circle *ptr = new Circle;
    ptr -> setRadius(25);
	double radius_dynamic = ptr -> getArea();
	cout << "Area of dynamically created circle object is: " << radius_dynamic;
	delete ptr;
	return 0;
}
