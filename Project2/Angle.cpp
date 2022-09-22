#include "Angle.h"

void Angle::setu(Vector pos1 ,Vector pos2)
{
	posold.copy(pos1);
	posnew.copy(pos2);
}

void Angle::calang()
{
	Vector v1 = posold + init.getPosEarth().reverse();
	Vector v2 = posnew + init.getPosEarth().reverse();

	double innerMult = v1.x*v2.x + v1.y*v2.y + v1.z*v2.z;
	double cosQ = innerMult / (v1.length()*v2.length());
	Q = acos(cosQ);
	this->delta = v1 ^ v2;
}

double Angle::getang()
{
	return Q;
}