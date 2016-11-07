//////////////
//Anna Tran
//CS 172 Sec 1
//14.3
/////////////
#include<iostream>
#include"CircleWithConstantMemberFunction.h"
#include"Source.cpp"

using namespace std;

int main() {
	cout << "Number of Circles created: "<<Circle::getNumberOfObjects() << endl;

	Circle circle1;
	cout << "The area of the circle of radius " << circle1.getRadius() <<"is"<<circle1.getArea()<< endl;
	cout << "Number of objects created: " << Circle::getNumberOfObjects() << endl;

	Circle circle2(5.0);
	cout << "The area of the circle of radius " << circle2.getRadius() << "is" << circle2.getArea() << endl;
	cout << "Number of objects created: " << Circle::getNumberOfObjects() << endl;

	circle1.setRadius(3.3);
	cout << "The are of the circle of radius " << circle1.getRadius() << "is" << circle1.getArea() << endl;
	cout << "circle1.getNumberOfObjects() returns" << circle1.getNumberOfObjects() << endl;
	cout << "circle2.getNumberOfObjects() returns" << circle2.getNumberOfObjects() << endl;

	return 0;
}