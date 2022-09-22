#pragma once
#include"Vector.h"
#include"Init.h"
class AirodynemicForce
{
	Vector u;
	Vector forceVector;
	Vector pos;
	Init init;
public:
	void setU(Vector v);
	void setPos(Vector pos);
	double calRp();
	double calAF();
	double getU();
	void calVec();
	Vector getForceVector();
};

