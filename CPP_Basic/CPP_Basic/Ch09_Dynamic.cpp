#include "io.h"

void DynamicVariable()
{
	// ���� ���� ����
	int* pNum = new int;
	char* pValue = new char;

	// �� �־��ֱ� 
	*pNum = 10;
	*pValue = 'a';

	cout << "pNum : " << pNum << endl;
	cout << "pValue : " << pValue << endl;

	cout << "*pNum : " << *pNum << endl;
	cout << "* pValue : " << *pValue << endl;

	// �̹� �� ���� 2�� ���� - �޸� ����
	delete pNum;
	delete pValue;

	int a[3] = { 1,2,3 };
	int* pa = a; // �迭 �����̱� ������ &a��� ���� �ʾƵ� �� 

	cout << a[0] << " : " << pa[0] << endl;

	int size = 3;
	int* pArray = new int[size];

	pArray[0] = 10;

	cout << pArray[0] << endl;

	// delete 

}