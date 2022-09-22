#pragma once
#include "Vector.h"
class Init
{
	
	double mass, t,G,mEarth,R,CRp,Asat,k,v0Value,hight,ef;
	Vector posSat, posEarth,v0u;
	int n;
	double **destany;
public:
	Init();
	double getMass();
	double getT();
	Vector getPosSat();
	Vector getPosEarth();
	double getmEarth(); 
	double getG();
	double getR();
	double getAsat();
	double getCRp();
	double getEf();
	double getD();
	double getK();
	Vector getV0();
	int getN();
	double**getDestany();
};

