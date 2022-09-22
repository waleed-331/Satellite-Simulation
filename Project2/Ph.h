#include "Vector.h"
#include"Init.h"
#include "AirodynemicForce.h"
#include"GrivetyForce.h"
#include"Ef.h"
class Ph
{
	Vector v, a, pos,F,dv,dpos,v0,pos0;
	AirodynemicForce af;
	GrivetyForce gf;
	Ef ef;
	double dt;
	int state;
	
	Init init;
public:
	void setPos0(Vector);
	void setV0(Vector);
	void setState(int);

	void calF();
	void cal_a();
	void cal_v();
	void cal_dv();
	void cal_pos();
	void cal_dpos();
	void ref(int );
	Vector getV();

	Vector getPos();


};

