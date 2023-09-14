#include "io.h"

void PointerDefine()
{
	int a = 10;
	
	cout << "a : " << a << endl; // -> �� ���
	cout << "&a : " << &a << endl; // &a : &(�ּ�����) ���� -> �ּ� ��� 
	// 000000ACC9FAFA04 -> 16bit

	int* pa = &a; // ������ ������ �ּҰ� ���� 
	// �Ϲ������� �ּҰ��� ��Ÿ�� �� �տ� p�� ���� 

	cout << "pa : " << pa << endl; // -> �ּ� ���
	cout << "*pa : " << *pa << endl; // -> �� ��� 

	int** ppa = &pa; // �����͸� �����ϴ� ������ "��������"

	cout << "ppa : " << ppa << endl;
	cout << "*ppa : " << *ppa << endl;
	cout << "**ppa : " << **ppa << endl;

	cout << "pa + 1 : " << pa + 1 << endl;
	cout << "*pa + 1 : " << * pa + 1 << endl;
	cout << "*(pa + 1) : " << *(pa + 1) << endl;
	
	cout << "________________" << endl;
	cout << endl;

	int Array[3] = { 1,5,9 };
	int* pArray = Array; // Array ��ü�� �ּ��̱� ������ &Array��� ǥ������ ����

	cout << "Array : " << Array << endl;
	cout << "pArray : " << pArray << endl;

	cout << "Array[1] : " << Array[1] << endl;
	cout << "pArray[1] : " << pArray[1] << endl;

	cout << "*pArray : " << *pArray << endl;
	cout << "*Array : " << *Array << endl;

	cout << "________________" << endl;
	cout << endl;

	cout << "Array + 1 : " << Array + 1 << endl;
	cout << "pArray + 1 : " << pArray + 1 << endl;
	cout << "*Array + 1 : " << *Array + 1 << endl;
	cout << "*pArray + 1 : " << *pArray + 1 << endl;
	cout << "*(Array + 1) : " << *(Array + 1) << endl;
	cout << "*(pArray + 1) : " << *(pArray + 1) << endl;
	

}