#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
using namespace std;

class Circle
{
private: 
	double radius;
	int numberOfObjects;

public:
	Circle();
	Circle(double radius);
	double getArea() const;
	double getRadius() const;
	void setRadius(double radius);
	int getNumberOfObjects();

	bool operator<(const Circle& c1);
	bool operator<=(const Circle& c1);
	bool operator==(const Circle& c1);
	bool operator!=(const Circle& c1);
	bool operator>(const Circle& c1);
	bool operator>=(const Circle& c1);
};

#endif
