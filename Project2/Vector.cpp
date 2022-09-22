#include "Vector.h"

Vector::Vector(double x = 0, double y = 0, double z = 0){
	this->x = x;
	this->y = y;
	this->z = z;
}


void Vector::copy(Vector & copy){
	this->x = copy.x;
	this->y = copy.y;
	this->z = copy.z;
}
Vector::Vector(){
	this->x = 0;
	this->y = 0;
	this->z = 0;
}
void Vector::set(double x = 0, double y = 0, double z = 0){
	this->x = x;
	this->y = y;
	this->z = z;
}
Vector Vector:: operator+(Vector b){
	Vector c(0, 0, 0);
	c.x = x + b.x;
	c.y = y + b.y;
	c.z = z + b.z;
	return c;
}
Vector Vector:: operator*(double b){
	Vector c(b*x, b*y, b*z);
	return c;
}
Vector Vector::reverse(){
	return Vector(-x, -y, -z);

}
Vector Vector::findSame(double length){
	double k = length / this->length();
	return Vector(k*x, k*y, k*z);
}
double Vector::length(){
	return sqrt(x*x + y*y + z*z);
}
Vector Vector:: operator^(Vector v)
{
	Vector c(0, 0, 0);
	c.x = (y * v.z) - (z * v.y);
	c.y = (z * v.x) - (x * v.z);
	c.z = (x * v.y) - (y * v.x);
	return c;
}