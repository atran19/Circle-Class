//////////////
//Anna Tran
//CS 172 Sec 1
//14.3
//////////////

#include<iostream>
#include"CircleWithConstantMemberFunction.h"

using namespace std;

int Circle::numberOfObjects = 0;

Circle::Circle()
{
	radius = 1;
	numberOfObjects++;
}


Circle::Circle(double newRadius)
{
	radius = newRadius;
	numberOfObjects++;
}

double Circle::getArea()const
{
	return radius*radius*3.15149;
}
double Circle::getRadius()const
{
	return radius;
}
void Circle::setRadius(double newRadius)
{
	radius = (newRadius > 0) ? newRadius : 0;
}
int Circle::getNumberOfObjects()
{
	return numberOfObjects;
}
Circle Circle::Subtract(const Circle& secondCircle)const
{
	double r = radius - secondCircle.getRadius();
	return Circle(r);
}

int Circle::compareTo(const Circle& secondCircle)const
{
	Circle temp = Subtract(secondCircle);
	if (temp.getRadius() < 0)
		return -1;
	else if (temp.getRadius() == 0)
		return 0;
	else return 1;
}
bool Circle::operator<(const Circle& secondCircle)const 
{
	if (compareTo(secondCircle) < 0)
		return true;
	else
		return false;
}
bool Circle::operator<=(const Circle& secondCircle)const
{
	if (compareTo(secondCircle) <= 0)
		return true;
	else 
		return false;
}

bool Circle::operator==(const Circle& secondCircle)const
{
	if (compareTo(secondCircle) == 0)
		return true;
	else
		return false;
}
bool Circle::operator!=(const Circle& secondCircle)const
{
	if (compareTo(secondCircle) == 0)
		return true;
	else
		return false;
}
bool Circle:: operator >(const Circle& secondCircle)const
{
	if (compareTo(secondCircle) > 0)
		return true;
	else
		return false;
}
bool Circle::operator >=(const Circle& secondCircle)const
{
	if (compareTo(secondCircle) > 0)
		return true;
	else
		return false;
}