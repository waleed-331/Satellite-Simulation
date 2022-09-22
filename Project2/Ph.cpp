#include "Ph.h"
#include "Init.h"

void Ph::cal_a(){
	this->a = F*(1 / init.getMass());
}

void Ph::setPos0(Vector p0){
	pos0.copy(p0);
}
void Ph::setV0(Vector v0){
	this->v0.copy(v0);
}
void  Ph::cal_dv(){
	this->dv = a*(dt);

}
void Ph::cal_v(){
	this->v = v0 + dv;
}

void  Ph::cal_dpos(){
	this->dpos = (a*(dt*dt / 2) + v0*dt)*(1 / init.getK());

}
void Ph::cal_pos(){
	this->pos = pos0 + dpos;
}
void Ph::ref(int time_rate){
	dt = init.getT() / time_rate;
	for (int i = 0; i < time_rate; i++){
		calF();
		cal_a();
		cal_dv();
		cal_v();
		cal_dpos();
		cal_pos();
		pos0.copy(pos);
		v0.copy(v);
	}
 
}

Vector Ph::getPos(){
	return this->pos;
}
Vector Ph::getV(){
	return v;
}

void Ph::calF(){
	gf.setU(pos0);
	gf.calVec();

	af.setU(v0);
	af.setPos(pos0);
	af.calVec();

	if (state != 0){
		ef.setU(v0, pos0, state);
		ef.calVec();
	}

	this->F.copy((af.getForceVector()+gf.getForceVector())+ef.getForceVector());
}
void Ph::setState(int state){
	this->state = state;
}