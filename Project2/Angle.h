#pragma once
#include"Vector.h"
#include"Init.h"
class Angle
{
public:
	Vector posold, posnew ;
	Init init;
	double Q;
	Vector delta;
	void setu(Vector,Vector);
	void calang();

	double getang();
	double getDelta();
	
};

