#pragma once

#include "Vehicle.h"

class Auto : public Vehicle
{
public:
	// Auto�� Vehicle�� ���� �����Ͽ� Vehicle���� �����. ���´� Vehicle�� �Լ��� ���� 
	Auto(); // ���� ��� ����
	Auto(int _Year, int _Price);
};