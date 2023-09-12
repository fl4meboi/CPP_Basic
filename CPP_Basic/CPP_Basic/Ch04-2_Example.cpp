#include "io.h"

void MultipleCalculation()
{
    int LoopCount, Value1, Value2;
    // 한번에 여러 값 선언 

    while (true)
    {
        cout << "반복 횟수를 입력하세요." << endl;
        cin >> LoopCount;

        if (LoopCount >= 1 && LoopCount <= 5)
        {
            break;
        }
        else
        {
            cout << "횟수는 1에서 5번까지만 입력 가능합니다." << endl;
        }
    }



    for (int i = 0; i < LoopCount; i++)
    {
        cout << "두 수를 입력해주세요.";
        cin >> Value1;
        cin >> Value2;
        cout << Value1 << " + " << Value2 << " = " << Value1 + Value2 << endl;

    }
}

void Reciept()
{
    int TotalPrice = 0;
    int Count = 0;
    int Price = 0;
    int Number = 0;
    int SumPrice = 0;

    cout << "구입 총 금액 : " << endl;
    cin >> TotalPrice;
    cout << "물건 종류 수 : " << endl; // 반복 횟수
    cin >> Count;

    for (int i = 1; i < Count; i++)
    {
        cout << i << "번 물건 가격 : " << endl;
        cin >> Price;
        cout << i << "번 물건 개수 : " << endl;
        cin >> Number;
        cout << i << "번 물건 총 가격 : " << Price * Number << endl;

        SumPrice += Price * Number;
    }

    if (TotalPrice == SumPrice)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    // 삼항 연산도 가능
}

// 중첩 루프 문제

void Star()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    /* i=1일 때 j=1
       i=2일 때 j=2
       ...
       i=5일 때 j=5
       결국 i 개수는 j와 같다
    */

    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= (5 - i); j++)
        {
            cout << "*";
        }
        cout << endl;
        // 반대로 생각하면 별 앞에 공백을 찍는 행위
    }


}

