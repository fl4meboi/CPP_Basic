#include "io.h"

void DynamicVariable()
{
	// 동적 변수 선언
	int* pNum = new int;
	char* pValue = new char;

	// 값 넣어주기 
	*pNum = 10;
	*pValue = 'a';

	cout << "pNum : " << pNum << endl;
	cout << "pValue : " << pValue << endl;

	cout << "*pNum : " << *pNum << endl;
	cout << "* pValue : " << *pValue << endl;

	// 이미 쓴 변수 2개 해제 - 메모리 관리
	delete pNum;
	delete pValue;

	int a[3] = { 1,2,3 };
	int* pa = a; // 배열 변수이기 때문에 &a라고 하지 않아도 됨 

	cout << a[0] << " : " << pa[0] << endl;

	int size = 3;
	int* pArray = new int[size];

	pArray[0] = 10;

	cout << pArray[0] << endl;

	// delete 

}