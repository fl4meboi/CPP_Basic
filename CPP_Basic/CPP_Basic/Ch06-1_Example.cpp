#include "io.h"

void IndexChar()
{
    char word[20];
    int number;

    cout << "원하는 단어를 입력해주세요 : ";
    cin >> word;
    cout << "출력을 원하는 자리수를 입력해주세요 : ";
    cin >> number;

    cout << word[number - 1]; // index(\n)로 시작하니까
}

// 이것 역시 구구단 함수와 비슷한 원리
void AlphaNumber()
{
    char Word[20]; // 배열 정의만 하면 counter 입력해야 함
    int WordSize = sizeof(Word) - 1;
    // 이렇게 정의해 놓으면 밑에 for문에서 복잡하게 i < (sizeof(Word) - 1) 쓸 필요 없음
    // 그리고 혹시나 배열값을 20에서 40으로 바꿔도 밑에서 바꾸지 않아도 되는 편리함

    cout << "원하는 단어를 입력해주세요.";
    cin >> Word;

    char Alpha[] = "abcdefghigklmnopqrstuvwxyz"; // 초기화를 하면 counter는 입력 안해도 됨
    int AlphaSize = sizeof(Alpha) - 1; // 대신 Alpha배열의 크기를 자동으로 함수로 지정
    // '\0'는 빼고 세어야 함 

    // 배열 변수 선언시 크기 인덱스는 변수로 지정할 수 없음
    // C++ 컴파일 언어 -> 컴파일하는 시간에 배열 크기 결정(눈에 보이지 않는 실행) 
    // 크기를 변수로 지정하면 크기를 지정할 수 없음 -> 숫자로 넣어야 함 
    // int Check[AlphaSize]; // 숫자 출력
    int* pCheck = new int[AlphaSize];

    for (int i = 0; i < AlphaSize; i++) // 이제 Alpha 배열 크기 함수를 넣으면 알아서 계산 
    {
        pCheck[i] = -1; // false로 초기화 세팅 (없는 알파벳이면 -1 출력)
    }
    
    // word와 alpha를 check을 통해 비교
    for (int i = 0; i < WordSize; i++)
    {
        for (int j = 0; j < AlphaSize; j++)
        {
            if (Word[i] == Alpha[j])
            {
                if (pCheck[j] == -1)
                {
                    pCheck[j] = i;
                }
            }
        }
    }

    cout << WordSize << endl;
    cout << AlphaSize << endl;

    for (int i = 0; i < AlphaSize; i++)
    {
        cout << pCheck[i] << " ";
    }
    // 끝에 나오는 쓰레기값은 내일 해결 
    // 과제 안 낸 사람 문제와 같은 패턴 
}

void MaxCount()
{
    int Number[9]; // 선언하자마자 외부입력을 받으니까 굳이 초기화 안해도 됨
    for (int i = 0; i < 9; i++) // i는 "개수"까지 반복됨 
    {
        cout << "숫자 데이터를 입력해주세요 : ";
        cin >> Number[i];
    }

    // 최댓값 지정 
    // 최댓값 순서 
}