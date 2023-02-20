#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더


using namespace std;

int main()
{
    // 정렬 알고리즘 [성능과 난이도는 비례함]
    // 난이도 하 : 거품 정렬, 선택 정렬, 삽입 정렬
    //  중 : 퀵 정렬, 계수 정렬, 힙 정렬, 병합 정렬
    //  상 : 토폴로지 정렬, 기수 정렬

    // 거품 정렬
    // 서로 인접한 두 원소의 대소를 비료하여, 조건에 맞지 않다면 자리를
    // 교환하여 정렬하는 알고리즘이다.
    // 시간 복잡도(O n²)

    int array[5] = { 7, 43, 1, 11, 3 };


    for (int c = 4; c != 0; c--)
    {
        for (int i = 0; i < c; i++)
        {
            if (array[i] > array[i + 1])
            {
                /*
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                */ // 스왑문
                swap(array[i], array[i + 1]);
            }

        }
    }


    for (int i = 0; i <= 4; i++)
        cout << array[i] << endl;






    return 0;
}
