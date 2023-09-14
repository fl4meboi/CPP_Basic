#include "io.h"
#include "Ch10_Class.h"

void Car::DriveVelocity()	// namespace 쓰는 것처럼 
{
	cout << Velocity << "km" << endl;
}

void Car::DriveTime()
{
	int LengthUnit = 100;
	cout << (100 / Velocity) << "hr" << endl;
}

