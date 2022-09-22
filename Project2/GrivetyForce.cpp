#include "GrivetyForce.h"


void GrivetyForce::setU(Vector pos){
	this->u = init.getPosEarth() + pos.reverse();
}

void GrivetyForce::calVec(){
	this->forceVector.copy(u.findSame(this->calGF()));
}


double GrivetyForce::calGF(){
	return (init.getG() * init.getmEarth() * init.getMass()) / ((u.length()*init.getK())*(u.length()*init.getK()));
}

Vector GrivetyForce::getForceVector(){
	return this->forceVector;
}
