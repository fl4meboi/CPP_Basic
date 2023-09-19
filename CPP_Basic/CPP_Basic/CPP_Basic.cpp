#include "Cpp_Basic.h"
#include "io.h"

#define PLUS (2 + 3)

#include "Ch10_Class.h"
#include "Vehicle.h"
#include "Animal.h"
#include "Bike.h"
#include "Atv.h"
#include "Arithmatic.h"
#include "Auto.h"

int main()
{
    // class 정적 선언 
    Vehicle Ray(2023, 12000000);

    cout << "가격 : ";
    Ray.PrintPrice();

    Ray.SetYear(2021);
    Ray.PrintYear();
    Ray.PrintYear();
    
    cout << Ray.GetYear() << endl; 
    // 동적 생성

    Vehicle Sonata; // Vehicle.h에서 default constructor를 선언했기 때문에 가능한 함수 

    // class 동적 선언(생성)ㅁ
    Animal* Dog = new Animal; 
    Dog->PrintFinger(); // 동적선언할 때 가리키는 의미. Dog가 class. 

    delete Dog; // 모든 상황에서 반드시 해야할 필요는 없음 

    // 자식 클래스 생성
    Atv Moto;

    // 상속받은 Bike class의 멤버 
    Moto.PrintTire();
    Moto.Price;
    cout << Moto.Price << endl;

    // Atv class의 멤버 
    Moto.PrintPrice();

    // 함수 오버로딩
    Arithmatic Expression;
    Expression.Sum(50);
    Expression.Sum(14.72f); // 소수점 뒤에 f 안 넣어주면 double로 인식함 
    Expression.Sum(1, 2); 

    // 함수 오버라이딩 
    Moto.Print();
    // 부모인 Bike의 함수가 overriding 되어서 자식인 Atv로 나타남 

    cout << "--------------------" << endl;

    // 생성자가 명시적으로 선언
    // 자식 class 선언할 때 : 명시적 선언 
    Auto Mobile();

    Auto Avante(2024, 30000000);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
