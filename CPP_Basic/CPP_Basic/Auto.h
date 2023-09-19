#pragma once

#include "Vehicle.h"

class Auto : public Vehicle
{
public:
	// Auto로 Vehicle에 값을 전달하여 Vehicle에서 계산함. 형태는 Vehicle의 함수와 같이 
	Auto(); // 원형 모양 선언
	Auto(int _Year, int _Price);
};