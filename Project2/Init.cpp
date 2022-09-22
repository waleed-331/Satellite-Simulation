#include "Init.h"
#include<math.h>

Init::Init()
{
	mass = 1000;
	t = 10;
	this->posEarth = Vector(0, 0, -70);
	this->posSat.set(20, 0, -70);
	mEarth = 5.972 * pow((double)10, 13);//ßÊáÉ ÇáÇÑÖ   
	v0Value = 3200;
	v0u.set(0, 1, 0);
	R = 6378137;//äÕÝ ÞØÑ ÇáÇÑÖ
	k = 637813.7;
	G = 6.6743;
	hight = 1000;
	this->Asat = 10;
	this->CRp = 0.001;
	ef = 5000;
	n = 7;
	destany= new double*[n];
	destany[0] = new double[] {40, 0};
	destany[1] = new double[] {100, pow((double)10,-2) };
	destany[2] = new double[] {200, pow((double)10, -5)  };
	destany[3] = new double[] {300, pow((double)10, -8)  };
	destany[4] = new double[] {400, pow((double)10, -10)  };
	destany[5] = new double[] {600, pow((double)10, -11)  };
	destany[6] = new double[] {1000, pow((double)10, -13) };
}

double Init::getMass(){
	return mass;
}
double Init::getT(){
	return t;
}
Vector Init::getPosSat(){
	Vector dpos = this->posSat + posEarth.reverse();
	return posEarth + dpos.findSame((this->R + this->hight) / this->k);
}
Vector Init::getPosEarth(){
	return posEarth;
}
double Init::getmEarth(){
	return mEarth;
}
double Init::getG(){
	return G;
}
double Init::getR(){
	return R;
}

double Init::getCRp(){
	return CRp;
}
double Init::getAsat(){
	return Asat;
}
double Init::getK(){
	return k;
}
Vector Init::getV0(){
	return v0u.findSame(v0Value);
}

int Init::getN(){
	return this->n;
}
double** Init::getDestany(){
	return this->destany;
}
double Init::getEf(){
	return this->ef;
}