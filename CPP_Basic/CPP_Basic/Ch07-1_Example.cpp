#include "io.h"

void StringExtract()
{
	/*
	// �׽�Ʈ ���̽��� ����
	char Word[10];
	int WordSize = sizeof(Word) - 1;

	cout << "���ڿ��� �Է����ּ��� : ";
	cin >> Word;

	cout << Word[0] << " / " << Word[];
	*/
	
	int InputWord; 

	// ���ڿ� �Է�
	cout << "���ڿ��� �Է��Ͻÿ� : ";
	cin >> InputWord;

	for (int t = 0; t < InputWord; t++)
	{
		string input;
		cin >> input;

		cout << input[0] << " / " << input[input.length() - 1];
	}
	
}

void Dial()
{
	// ���ĺ��� ���� ���� 
	// 1 -> 2�� / ���� ���ڵ��� 1�ʾ� �߰� 
	// n�� -> n+1�� �ɸ�
	// 


}