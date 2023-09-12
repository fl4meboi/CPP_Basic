#include "io.h"

void CountNumbers()
{
    int Counter = 0;
    cout << "숫자 개수를 입력해주세요 : ";
    cin >> Counter;

    int Number[Counter]; // 선언하자마자 외부입력을 받으니까 굳이 초기화 안해도 됨
    for (int i = 0; i < Counter; i++) // i는 "개수"까지 반복됨 
    {
        cout << "숫자 데이터를 입력해주세요 : ";
        cin >> Number[i];
    }

    int FindNumber; // 찾을 숫자 입력
    cout << "찾을 수를 입력해주세요 : ";
    cin >> FindNumber;

    int FindCount = 0; // 찾을 숫자 갯수 세기
    for (int i = 0; i < Counter; i++)
    {
        if (Number[i] == FindNumber)
        {
            FindCount++;
        }
    }

    cout << "찾는 수의 개수는 " << FindCount << "개 입니다.";


}

void LessNumber()
{
    // 모듈화
    int Counter = 0;
    cout << "숫자 개수를 입력해주세요 : ";
    cin >> Counter;

    int FindNumber; // 찾을 숫자 입력
    cout << "기준 수를 입력해주세요 : ";
    cin >> FindNumber;

    int Number[Counter]; // 선언하자마자 외부입력을 받으니까 굳이 초기화 안해도 됨
    for (int i = 0; i < Counter; i++) // i는 "개수"까지 반복됨 
    {
        cout << "숫자 데이터를 입력해주세요 : ";
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
    cout << "전체 학생 수를 입력해주세요 : ";
    cin >> Counter;

    int FindNumber; // 찾을 숫자 입력
    cout << "과제를 제출하지 않은 학생 수를 입력해주세요 : ";
    cin >> FindNumber;

    // 전체 학생 번호 데이터 set
    int TotalMember[Counter];
    for (int i = 0; i < Counter; i++)
    {
        TotalMember[i] = i + 1;
    }

    // 과제 제출한 학생 번호 set
    int GoodStudent[Counter - FindNumber];
    for (int i = 0; i < (Counter - FindNumber); i++) // 과제 한 학생 번호 무작위 입력
    {
        cout << "과제를 제출한 학생들의 출석번호 데이터를 입력하시오 : ";
        cin >> GoodStudent[i];
    }

    // 제출 확인용 배열 변수 set
    bool Check[Counter];
    for (int i = 0; i < Counter; i++)
    {
        Check[i] = false;
    }

    // 제출한 학생, 미제출 학생 구분 - true/false로
    for (int i = 0; i < (Counter - FindNumber); i++) // 구구단 함수와 같은 원리
    {
        for (int j = 0; j < Counter; j++)
        {
            if (GoodStudent[i] == TotalMember[j])
            {
                Check[j] = true;
            }
        }
    }

    // 미제출 학생 번호 색출
    for (int i = 0; i < Counter; i++)
    {
        if (Check[i] == false)
        {
            cout << i + 1 << "번 안 냄" << endl;
        }
    }

}