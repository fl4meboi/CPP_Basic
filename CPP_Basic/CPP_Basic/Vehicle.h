#pragma once
#include <iostream>


class Vehicle
{
private:
	int Year;
	
public:
	int Price;

	// Constructor ����� ����
	Vehicle(); // Default Constructor (�μ� ���� ���ุ)
	Vehicle(int _Year, int _Price); // �ʱ�ȭ�ϸ鼭 ����

	// Destructor ����
	~Vehicle();

	// Method
	void PrintYear();
	void PrintPrice();
	int GetYear();
	void SetYear(int newYear);
};