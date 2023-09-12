#include "io.h"

void DefineArray()
{
    // 선언, declare(define)
    int a[3] = { 1,2,3 };
    int b[10] = { 1,2 };
    // int c[3] = {1,2,3,4}; => Syntax Error
    int d[3];

    // 칸 개별 대입 -> 접근, access
    d[0] = 1;
    d[1] = 2;
    d[2] = 3;

    // 이렇게 나열하는 방법 대신 

    // 배열에서는 i <= 2 보다 i < 3이 더 보기 편함. 원소 개수
    // d 배열의 개수는 3개, 반복 5번 값을 대입 -> 에러 발생
    for (int i = 0; i < 5; i++)
    {
        cout << "c" << i; // 티를 내려고
        d[i] = i + 1;
    }

    cout << endl;

    // 출력 -> 접근, Access
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << "  :  ";
    }

    cout << endl;

    // 배열 개수 10개, 반복 13번 대입 -> 에러 발생 -> 쓰레기값 생성
    for (int i = 0; i < 13; i++)
    {
        cout << b[i] << "  :  ";
    }

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << d[i] << "  :  ";
    }


}

void TwoDimension()
{
    // 앞이 세로 방향
    int Number[3][2] = {
      {1,2},
      {3,4},
      {5,6}
    };

    cout << Number[0][0] << endl;
    cout << Number[2][1] << endl; // index와 개수는 다르다 

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << Number[i][j] << endl;
        }
    }
}