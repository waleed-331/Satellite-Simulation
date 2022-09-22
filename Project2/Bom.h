#pragma once
#include"Vector.h"
#include"Init.h"
class Bom
{
public:
	Vector vin1, vin2;
	double m1, m2 ,mnew1,mnew2,mnew3,mnew4;
	Vector vout1, vout2;

	void setu(Vector ,Vector, double,double);
	void refb();
	Vector getvout1();
	Vector getvout2();
};

