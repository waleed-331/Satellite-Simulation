#include "Ef.h"



void Ef::setU(Vector velocity, Vector pos, int state){
	Vector dpos = pos + init.getPosEarth().reverse();
	switch (state)
	{
	case 1:
		this->u = dpos;
		break;
	case 2:
		this->u = dpos^velocity;
		u = u.reverse();
		break;
	case 3:
		this->u = dpos^velocity;
		break;
	default:
		break;
	}
}
double Ef::calef()
{

	return init.getEf();
}

Vector Ef::getForceVector(){
	return this->forceVector;
}
void Ef::calVec(){
	this->forceVector.copy(u.findSame(this->calef()));
}
