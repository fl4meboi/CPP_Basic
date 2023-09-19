#pragma once
#include <iostream>

class Arithmatic
{
private:
	int Integer;
	float DecimalNumber;

public: 
	/*
	void Sum(int _Integer);
	void SumFloat(float _DecimalNumber);
	void SumTwo(int _Integer1, int _Integer2);
	void SumThree(int _Integer1, int _Integer2, int _Integer3);
	// 이렇게 하면 너무 불편하기 때문에 오버로딩을 쓰는 것 
	*/

	void Sum(int _Integer);
	void Sum(float _DecimalNumber);
	void Sum(int _Integer1, int _Integer2);
};