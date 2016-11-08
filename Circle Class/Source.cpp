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

bool Circle::operator<(const Circle& secondCircle)
{
	return (this->getRadius()) < (secondCircle.getRadius());
}

bool Circle::operator<=(const Circle& secondCircle)
{
	return(this->getRadius()) <= (secondCircle.getRadius());
}

bool Circle::operator==(const Circle& secondCircle)
{
	return (this->getRadius()) == (secondCircle.getRadius());
}
bool Circle::operator!=(const Circle& secondCircle)
{
	return (this->getRadius()) != (secondCircle.getRadius());
}
bool Circle:: operator >(const Circle& secondCircle)
{
	return(this->getRadius()) > (secondCircle.getRadius());
}
bool Circle::operator >=(const Circle& secondCircle)
{
	return (this->getRadius()) >= (secondCircle.getRadius());
}