// EX06_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Circle.h"
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	Circle c1(5.5);
	Circle c2(4.5);

	if (c1 < c2)
		cout << "c1 is smaller" << endl;
	else
		cout << "c2 is smaller" << endl;


    return 0;
}

