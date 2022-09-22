#include "Bom.h"

void Bom::setu(Vector v1 ,Vector v2,double m11, double m22)
{   
	vin1.copy(v1);
	vin2.copy(v1);
	m1 = m11;
	m2 = m22;

}

void Bom::refb()
{
	mnew1 = (m1 - m2) / (m1 + m2);
	mnew2 = (2 * m2 / (m1 + m2));
	mnew3 = (2*m1) / (m1 + m2);
	mnew4 = ( m2 -m1 / (m1 + m2));
	vout1 = vin1*mnew1   + vin2*mnew2 ;
	vout2 = vin1*mnew3   + vin2*mnew4;

}

Vector Bom::getvout1()
{
	return vout1;
}

Vector Bom::getvout2()
{
	return vout2;
}