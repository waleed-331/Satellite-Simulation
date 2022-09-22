#pragma once
#include<math.h>
class Vector
{
public:
	double x, y, z;
	Vector(double, double, double);
	Vector();

	void  copy(Vector&);
	void set(double, double, double);
	Vector operator+(Vector);
	Vector operator*(double);
	Vector reverse();
	double length();
	Vector findSame(double);
	Vector operator^(Vector);
};

