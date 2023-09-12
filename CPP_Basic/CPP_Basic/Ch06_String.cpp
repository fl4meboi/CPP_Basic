#include "io.h"

void String()
{
    char a = 'A';

    char hello[5] = { 'H', 'E', 'L', 'L', 'O' };

    char world[6] = "WORLD"; // '\0' 문자가 포함됨

    char b[] = "Hello World"; // '\0'도 포함해야 함 -> 총 개수 : 12개

    int Size = sizeof(b); // b 배경 변수의 원소 개수를 세어주는 함수 

    cout << Size << endl;

    for (int i = 0; i < (Size - 1); i++)
    {
        cout << b[i] + 1 << endl;
    }

}