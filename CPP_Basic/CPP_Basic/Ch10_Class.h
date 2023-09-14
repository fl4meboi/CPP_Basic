#pragma once

class Car
{
	char Name[30];
	int Year;
	int Velocity;

public:		// 접근 제한자
	Car(int V) 
	{
		Velocity = V;
	}
	void DriveVelocity();	// 이건 호출이 아닌 선언 
	void DriveTime();
};