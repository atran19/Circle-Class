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
	bool operator<(const Circle& secondCircle);
	bool operator<=(const Circle& secondCircle);
	bool operator==(const Circle& secondCircle);
	bool operator!=(const Circle& secondCircle);
	bool operator >(const Circle& secondCircle);
	bool operator >=(const Circle& secondCircle);

private:
	double radius;
	static int numberOfObjects;
};