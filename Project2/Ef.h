#pragma once
#include"Vector.h"
#include"Init.h"

class Ef
{
	Vector  u;
	Vector forceVector;
	Init init;
public:
	void setU(Vector, Vector, int);

	double calef();
	void calVec();
	Vector getForceVector();
	
};

