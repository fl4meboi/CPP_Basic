#include "io.h"

void MultipleCalculation()
{
    int LoopCount, Value1, Value2;
    // �ѹ��� ���� �� ���� 

    while (true)
    {
        cout << "�ݺ� Ƚ���� �Է��ϼ���." << endl;
        cin >> LoopCount;

        if (LoopCount >= 1 && LoopCount <= 5)
        {
            break;
        }
        else
        {
            cout << "Ƚ���� 1���� 5�������� �Է� �����մϴ�." << endl;
        }
    }



    for (int i = 0; i < LoopCount; i++)
    {
        cout << "�� ���� �Է����ּ���.";
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

    cout << "���� �� �ݾ� : " << endl;
    cin >> TotalPrice;
    cout << "���� ���� �� : " << endl; // �ݺ� Ƚ��
    cin >> Count;

    for (int i = 1; i < Count; i++)
    {
        cout << i << "�� ���� ���� : " << endl;
        cin >> Price;
        cout << i << "�� ���� ���� : " << endl;
        cin >> Number;
        cout << i << "�� ���� �� ���� : " << Price * Number << endl;

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
    // ���� ���굵 ����
}

// ��ø ���� ����

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
    /* i=1�� �� j=1
       i=2�� �� j=2
       ...
       i=5�� �� j=5
       �ᱹ i ������ j�� ����
    */

    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= (5 - i); j++)
        {
            cout << "*";
        }
        cout << endl;
        // �ݴ�� �����ϸ� �� �տ� ������ ��� ����
    }


}

