#include "io.h"

void String()
{
    char a = 'A';

    char hello[5] = { 'H', 'E', 'L', 'L', 'O' };

    char world[6] = "WORLD"; // '\0' ���ڰ� ���Ե�

    char b[] = "Hello World"; // '\0'�� �����ؾ� �� -> �� ���� : 12��

    int Size = sizeof(b); // b ��� ������ ���� ������ �����ִ� �Լ� 

    cout << Size << endl;

    for (int i = 0; i < (Size - 1); i++)
    {
        cout << b[i] + 1 << endl;
    }

}