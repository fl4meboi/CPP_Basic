#include "io.h"

void IndexChar()
{
    char word[20];
    int number;

    cout << "���ϴ� �ܾ �Է����ּ��� : ";
    cin >> word;
    cout << "����� ���ϴ� �ڸ����� �Է����ּ��� : ";
    cin >> number;

    cout << word[number - 1]; // index(\n)�� �����ϴϱ�
}

// �̰� ���� ������ �Լ��� ����� ����
void AlphaNumber()
{
    char Word[20]; // �迭 ���Ǹ� �ϸ� counter �Է��ؾ� ��
    int WordSize = sizeof(Word) - 1;
    // �̷��� ������ ������ �ؿ� for������ �����ϰ� i < (sizeof(Word) - 1) �� �ʿ� ����
    // �׸��� Ȥ�ó� �迭���� 20���� 40���� �ٲ㵵 �ؿ��� �ٲ��� �ʾƵ� �Ǵ� ����

    cout << "���ϴ� �ܾ �Է����ּ���.";
    cin >> Word;

    char Alpha[] = "abcdefghigklmnopqrstuvwxyz"; // �ʱ�ȭ�� �ϸ� counter�� �Է� ���ص� ��
    int AlphaSize = sizeof(Alpha) - 1; // ��� Alpha�迭�� ũ�⸦ �ڵ����� �Լ��� ����
    // '\0'�� ���� ����� �� 

    int Check[AlphaSize]; // ���� ���
    for (int i = 0; i < AlphaSize; i++) // ���� Alpha �迭 ũ�� �Լ��� ������ �˾Ƽ� ��� 
    {
        Check[i] = -1; // false�� �ʱ�ȭ ���� (���� ���ĺ��̸� -1 ���)
    }

    // word�� alpha�� check�� ���� ��
    for (int i = 0; i < WordSize; i++)
    {
        for (int j = 0; j < AlphaSize; j++)
        {
            if (Word[i] == Alpha[j])
            {
                if (Check[j] == -1)
                {
                    Check[j] = i;
                }
            }
        }
    }

    cout << WordSize << endl;
    cout << AlphaSize << endl;

    for (int i = 0; i < AlphaSize; i++)
    {
        cout << Check[i] << " ";
    }
    // ���� ������ �����Ⱚ�� ���� �ذ� 
    // ���� �� �� ��� ������ ���� ���� 
}

void MaxCount()
{
    int Number[9]; // �������ڸ��� �ܺ��Է��� �����ϱ� ���� �ʱ�ȭ ���ص� ��
    for (int i = 0; i < 9; i++) // i�� "����"���� �ݺ��� 
    {
        cout << "���� �����͸� �Է����ּ��� : ";
        cin >> Number[i];
    }

    // �ִ� ���� 
    // �ִ� ���� 
}