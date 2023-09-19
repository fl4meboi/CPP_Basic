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
    // class ���� ���� 
    Vehicle Ray(2023, 12000000);

    cout << "���� : ";
    Ray.PrintPrice();

    Ray.SetYear(2021);
    Ray.PrintYear();
    Ray.PrintYear();
    
    cout << Ray.GetYear() << endl; 
    // ���� ����

    Vehicle Sonata; // Vehicle.h���� default constructor�� �����߱� ������ ������ �Լ� 

    // class ���� ����(����)��
    Animal* Dog = new Animal; 
    Dog->PrintFinger(); // ���������� �� ����Ű�� �ǹ�. Dog�� class. 

    delete Dog; // ��� ��Ȳ���� �ݵ�� �ؾ��� �ʿ�� ���� 

    // �ڽ� Ŭ���� ����
    Atv Moto;

    // ��ӹ��� Bike class�� ��� 
    Moto.PrintTire();
    Moto.Price;
    cout << Moto.Price << endl;

    // Atv class�� ��� 
    Moto.PrintPrice();

    // �Լ� �����ε�
    Arithmatic Expression;
    Expression.Sum(50);
    Expression.Sum(14.72f); // �Ҽ��� �ڿ� f �� �־��ָ� double�� �ν��� 
    Expression.Sum(1, 2); 

    // �Լ� �������̵� 
    Moto.Print();
    // �θ��� Bike�� �Լ��� overriding �Ǿ �ڽ��� Atv�� ��Ÿ�� 

    cout << "--------------------" << endl;

    // �����ڰ� ��������� ����
    // �ڽ� class ������ �� : ����� ���� 
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
