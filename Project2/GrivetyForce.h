#pragma once
#include"Vector.h"
#include"Init.h"
class GrivetyForce
{
	Vector u;
	Vector forceVector;
	Init init;
public:
	void setU(Vector pos);
	double calGF();
	void calVec();
	Vector getForceVector();
};

