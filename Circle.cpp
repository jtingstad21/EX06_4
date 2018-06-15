#include "Circle.h"

Circle::Circle()
{
	radius = 1;
	numberOfObjects++;
}

Circle::Circle(double radius)
{
	this->radius = radius;
	numberOfObjects++;
}

double Circle::getArea() const
{
	return radius * radius * 3.14159;
}

double Circle::getRadius() const
{
	return radius;
}

void Circle::setRadius(double radius)
{
	this->radius = (radius >= 0) ? radius : 0;
}

int Circle::getNumberOfObjects()
{
	return numberOfObjects;
}

bool Circle::operator<(const Circle & c1)
{
	if (radius < c1.radius)
		return true;
	else
		return false;
}

bool Circle::operator<=(const Circle & c1)
{
	if (radius <= c1.radius)
		return true;
	else
		return false;
}

bool Circle::operator==(const Circle & c1)
{
	if (radius == c1.radius)
		return true;
	else
		return false;
}

bool Circle::operator!=(const Circle & c1)
{
	if (radius != c1.radius)
		return true;
	else
		return false;
}

bool Circle::operator>(const Circle & c1)
{
	if (radius > c1.radius)
		return true;
	else
		return false;
}

bool Circle::operator>=(const Circle & c1)
{
	if (radius >= c1.radius)
		return true;
	else
		return false;
}


