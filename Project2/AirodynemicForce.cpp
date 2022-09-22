#include "AirodynemicForce.h"

void AirodynemicForce::setU(Vector v){
	this->u = v.reverse();
}

double AirodynemicForce::getU(){
	return u.length();
}


void AirodynemicForce::calVec(){
	this->forceVector.copy(u.findSame(this->calAF()));
}

double AirodynemicForce::calRp(){
	Vector dVector = init.getPosEarth() + pos.reverse();
	int i;
	double d = dVector.length()*init.getK() - init.getR();
	d /= 1000;
	for ( i = 0; i < init.getN(); i++){
		if (d < init.getDestany()[i][0])
			break;
	}
	if (i == init.getN())
		return 0;
	return init.getDestany()[i][1];

}

double AirodynemicForce::calAF(){
	return init.getCRp() * init.getAsat() * calRp() * (getU()*getU());
}

Vector AirodynemicForce::getForceVector(){
	return this->forceVector;
}

void AirodynemicForce::setPos(Vector p){
	this->pos.copy(p);
}

