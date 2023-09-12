#include "io.h"

void CountNumbers()
{
    int Counter = 0;
    cout << "���� ������ �Է����ּ��� : ";
    cin >> Counter;

    int Number[Counter]; // �������ڸ��� �ܺ��Է��� �����ϱ� ���� �ʱ�ȭ ���ص� ��
    for (int i = 0; i < Counter; i++) // i�� "����"���� �ݺ��� 
    {
        cout << "���� �����͸� �Է����ּ��� : ";
        cin >> Number[i];
    }

    int FindNumber; // ã�� ���� �Է�
    cout << "ã�� ���� �Է����ּ��� : ";
    cin >> FindNumber;

    int FindCount = 0; // ã�� ���� ���� ����
    for (int i = 0; i < Counter; i++)
    {
        if (Number[i] == FindNumber)
        {
            FindCount++;
        }
    }

    cout << "ã�� ���� ������ " << FindCount << "�� �Դϴ�.";


}

void LessNumber()
{
    // ���ȭ
    int Counter = 0;
    cout << "���� ������ �Է����ּ��� : ";
    cin >> Counter;

    int FindNumber; // ã�� ���� �Է�
    cout << "���� ���� �Է����ּ��� : ";
    cin >> FindNumber;

    int Number[Counter]; // �������ڸ��� �ܺ��Է��� �����ϱ� ���� �ʱ�ȭ ���ص� ��
    for (int i = 0; i < Counter; i++) // i�� "����"���� �ݺ��� 
    {
        cout << "���� �����͸� �Է����ּ��� : ";
        cin >> Number[i];
    }

    for (int i = 0; i < Counter; i++)
    {
        if (FindNumber > Number[i])
        {
            cout << Number[i] << " : ";
        }
    }
}

void MissingNumber()
{
    int Counter = 0;
    cout << "��ü �л� ���� �Է����ּ��� : ";
    cin >> Counter;

    int FindNumber; // ã�� ���� �Է�
    cout << "������ �������� ���� �л� ���� �Է����ּ��� : ";
    cin >> FindNumber;

    // ��ü �л� ��ȣ ������ set
    int TotalMember[Counter];
    for (int i = 0; i < Counter; i++)
    {
        TotalMember[i] = i + 1;
    }

    // ���� ������ �л� ��ȣ set
    int GoodStudent[Counter - FindNumber];
    for (int i = 0; i < (Counter - FindNumber); i++) // ���� �� �л� ��ȣ ������ �Է�
    {
        cout << "������ ������ �л����� �⼮��ȣ �����͸� �Է��Ͻÿ� : ";
        cin >> GoodStudent[i];
    }

    // ���� Ȯ�ο� �迭 ���� set
    bool Check[Counter];
    for (int i = 0; i < Counter; i++)
    {
        Check[i] = false;
    }

    // ������ �л�, ������ �л� ���� - true/false��
    for (int i = 0; i < (Counter - FindNumber); i++) // ������ �Լ��� ���� ����
    {
        for (int j = 0; j < Counter; j++)
        {
            if (GoodStudent[i] == TotalMember[j])
            {
                Check[j] = true;
            }
        }
    }

    // ������ �л� ��ȣ ����
    for (int i = 0; i < Counter; i++)
    {
        if (Check[i] == false)
        {
            cout << i + 1 << "�� �� ��" << endl;
        }
    }

}