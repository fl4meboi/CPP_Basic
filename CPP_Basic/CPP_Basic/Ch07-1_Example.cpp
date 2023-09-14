#include "io.h"

void StringExtract()
{
	/*
	// 테스트 케이스의 개수
	char Word[10];
	int WordSize = sizeof(Word) - 1;

	cout << "문자열을 입력해주세요 : ";
	cin >> Word;

	cout << Word[0] << " / " << Word[];
	*/
	
	int InputWord; 

	// 문자열 입력
	cout << "문자열을 입력하시오 : ";
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
	// 알파벳과 숫자 묶기 
	// 1 -> 2초 / 이후 숫자들은 1초씩 추가 
	// n번 -> n+1초 걸림
	/*
	1
	2 ABC
	3 DEF
	4 GHI
	5 JKL
	6 MNO
	7 PQRS
	8 TUV
	9 WXYZ
	0 
	*/





}