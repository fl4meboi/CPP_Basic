#include "io.h"

void Structure()
{
    /*
    // ����ü ���� ���� : ������ Ÿ�� ����
    struct inflatable {
      char name[20];
      float volume;
      double price;
      };
    // �̰� 1���� ���ο� ������ Ÿ���� �����ϴ� ����

    inflatable People; { "Tom", 0.75, 15.232};
    // ���⼭ ���� �̸��� people
    */

    struct sesac {
        // ��� ����
        char name[20];
        char address[100];
        char phone[20]; // ����ȣ���� ���� �ʹ� ū �����̱� ������ ���ڿ��� �����ؾ� ��
        int age;
    };

    sesac Banjang;
    Banjang = { "Jane", "�����", "01012345678", 25 };

    Banjang.age = 30; // int���� ���� �ٱ����� �� �� ���� -> �� ��� �������
    // �̰� ������ �ƴ� type�� �����ϴ� ��!
    // ���� '.'�� ������    ���߿� class ��ü������ �� ����� �� 
}

void Enum()
{
    // enum : ������ ������ Ÿ�� -> ���ڸ� ���ڷ� ������� 
    // Sun, Mon, Tue - ������ ���
    // 0���� �����ϴ� ����� ������ ����� ������ �Ҵ�
    enum day { Sun, Mon, Tue, Wed = 10, Thu, Fri, Sat };
    // ������ �ƴ϶� Ÿ���̶� �ҹ��ڷ� ��. inflatable, sesacó��
    // Ư���ϰ� �����ε� ����ǥ�� ���� ���� 

    day DayName;
    DayName = Mon;
    cout << DayName << endl;

    switch (DayName)
    {
    case Sun:
        cout << "Bed";
        break;
    case Mon:
        cout << "Work";
        break;
    case Tue:
        cout << "Work";
        break;
    case Wed:
        cout << "Work";
        break;
    case Thu:
        cout << "Work";
        break;
    case Fri:
        cout << "Work";
        break;
    case Sat:
        cout << "Netflix";
        break;
    }
}

void ChangeValue(int a)
{
    a = 0;
}

int ChangeValue2() {
    return 0;
}

int c = 10;

void CallByValue() // ���� ���� ȣ��
{
    // ChangeValue(c); // ��ȭ�� ����
    c = ChangeValue2();
}
