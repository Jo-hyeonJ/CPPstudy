#define _CRT_SECURE_NO_WARNINGS
// 문자열 관련 함수 보안 경고로 인한 컴파일 에러 방지

#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더
#include <climits>


using namespace std;


 int main()
 {
     // 삽입 정렬

     int array[5] = {3,5,1,7,11};

     int key = 0;
     int j = 0;

     for (int i = 1; i < 5; i++)
     {
         key = array[i];

         for (j = i - 1; j >= 0 && array[j] > key; j--)
         {

             array[j + 1] = array[j];
         }
         array[j + 1] = key;
     }

     for (const int &element : array)
     {
         cout << element << endl;
     }


     return 0;
 }

 









