#pragma once
class Circle
{
public:
	Circle();
	Circle(double);
	double getArea()const;
	double getRadius()const;
	void setRadius(double);
	static int getNumberOfObjects();
	bool operator<(const Circle& secondCircle)const;
	bool operator<=(const Circle& secondCircle)const;
//for compareto function
	Circle Subtract(const Circle& secondCircle)const;
//for operator== function
	int compareTo(const Circle& secondCircle)const;
	bool operator==(const Circle& secondCircle)const;
	bool operator!=(const Circle& secondCircle)const;
	bool operator >(const Circle& secondCircle)const;
	bool operator >=(const Circle& secondCircle)const;

private:
	double radius;
	static int numberOfObjects;
};