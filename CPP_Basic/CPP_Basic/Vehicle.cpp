#include <iostream>
#include "Vehicle.h"

using namespace std;

// Constructor 정의
Vehicle::Vehicle()
{
	cout << "Vehicle Constructor" << endl;
}

Vehicle::Vehicle(int _Year, int _Price)
{
	Year = _Year;
	Price = _Price;

	cout << "Vehicle Constructor" << endl;

	cout << "출고 연식 : ";
	PrintYear(); // 디폴트로 호출하는 함수를 정할 수도 있음 
}

// Destructor 정의
Vehicle::~Vehicle()
{
	cout << "자동차 확인" << endl;
}

void Vehicle::PrintYear()
{
	cout << Year << endl;
}

void Vehicle::PrintPrice()
{
	cout << Price << endl;
}

// Get, Set Method 
int Vehicle::GetYear()
{
	return Year;
}

void Vehicle::SetYear(int newYear)
{
	Year = newYear;
}




