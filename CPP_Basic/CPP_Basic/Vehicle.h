#pragma once
#include <iostream>


class Vehicle
{
private:
	int Year;
	
public:
	int Price;

	// Constructor 명시적 선언
	Vehicle(); // Default Constructor (인수 없이 실행만)
	Vehicle(int _Year, int _Price); // 초기화하면서 생성

	// Destructor 선언
	~Vehicle();

	// Method
	void PrintYear();
	void PrintPrice();
	int GetYear();
	void SetYear(int newYear);
};