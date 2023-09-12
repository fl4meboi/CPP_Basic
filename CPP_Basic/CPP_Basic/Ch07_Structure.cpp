#include "io.h"

void Structure()
{
    /*
    // 구조체 서술 정의 : 데이터 타입 생성
    struct inflatable {
      char name[20];
      float volume;
      double price;
      };
    // 이건 1개의 새로운 데이터 타입을 생성하는 행위

    inflatable People; { "Tom", 0.75, 15.232};
    // 여기서 변수 이름은 people
    */

    struct sesac {
        // 멤버 변수
        char name[20];
        char address[100];
        char phone[20]; // 폰번호같은 경우는 너무 큰 숫자이기 때문에 문자열로 정의해야 함
        int age;
    };

    sesac Banjang;
    Banjang = { "Jane", "서울시", "01012345678", 25 };

    Banjang.age = 30; // int같은 경우는 바깥으로 뺄 수 있음 -> 이 모양 기억하자
    // 이건 변수가 아닌 type을 선언하는 식!
    // 사이 '.'은 구분점    나중에 class 객체에서도 이 모양을 씀 
}

void Enum()
{
    // enum : 열거형 데이터 타입 -> 숫자를 문자로 만들어줌 
    // Sun, Mon, Tue - 열거형 상수
    // 0부터 시작하는 양수를 열거형 상수의 값으로 할당
    enum day { Sun, Mon, Tue, Wed = 10, Thu, Fri, Sat };
    // 변수가 아니라 타입이라서 소문자로 씀. inflatable, sesac처럼
    // 특이하게 문자인데 따옴표로 묶지 않음 

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

void CallByValue() // 값에 의한 호출
{
    // ChangeValue(c); // 변화가 없음
    c = ChangeValue2();
}
