#define _CRT_SECURE_NO_WARNINGS
// 문자열 관련 함수 보안 경고로 인한 컴파일 에러 방지

#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더
#include <climits>


using namespace std;

class Person
{
public:
    const char* name;
    char nickName[20];
    // = char * const nickName[20]
};


int main()
{
    Person person;

    // 문자열 복사함수
    /*
    // 상수 지시 포인터
    // 포인터를 역참조하여 값을 변경 할 수 없다.
    person.name = "Kim";
    // 하지만 다른 주솟값을 받을 수 있다.
    // rodata내부의 새로운 문자열과 주소를 배정받는 식
    person.name = "Lee";

    // 포인터 상수
    // 포인터 상수는 새로운 주소값을 받지 못하기에 문자열 배정이 불가능하다.
    // person.nickName = "FAKER";
    // person.nickName[1] = "F";

    // 8 byte
    // [F][A][K][E][R][\0]
    char temp[20] = "FAKER";

    // 배열의 이름은 배열의 시작 주소를 의미한다.
    

    // strcpy [문자열 복사 함수]
    // 첫 번째 매개변수 : 복사 받을 문자 배열
    // 두 번째 매개변수 : 복사 할 문자 배열
    strcpy(person.nickName, temp);
    // 기존의 변경 불가능하던 상황에서도 사용 가능

    cout << person.nickName << endl;
    */

    // 선택 정렬 알고리즘
    // 주어진 리스트 중에서 최솟값을 찾은 다음 그 값을 최전방 값과 교체하는 정렬
    
    // 시간 복잡도 O(n²)

    int array[5] = { 15,3,11,1,4 };
    int min= INT_MAX;

    // 내 답안
    for (int c = 0; c <= 4; c++)
    {
        for (int i = c; i < 5; i++)
        {
            if (min > array[i])
            {
                min = array[i];
            }
        }

        for (int a = 0; a < 5; a++)
        {
            if (min == array[a])
            {
                swap(array[c], array[a]);
            }
        }

        min = INT_MAX;
    }

    // 모범 답안
    for (int i = 0; i < 5; i++)
    {
        int minIndex = i;
        for (int j = i; j < 5; j++)
        {
            if (array[minIndex] > array[j])
            {
                minIndex = j;
            }
        }
        swap(array[minIndex], array[i]);

    }


    for (const int & element : array)
    {
        cout << element << endl;
    }

    return 0;
}











