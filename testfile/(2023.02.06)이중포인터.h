#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더
#include <deque> // 데크

using namespace std;

void PointSwap(int** x, int** y)
{
    int* temp;
    temp = *x;
    *x = *y;
    *y = temp;

}

void CallPoint(int** x, int** y)
{
    cout << "aptr의 주소: " << **x << endl;
    cout << "bptr의 주소: " << **y << endl;

}



int main()
{
    // Deque(데크)
    /*
    // LIFO와 FIFO가 동시에 존재함

    deque<int> deque;

    deque.push_back(10);
    deque.push_back(20);
    deque.push_back(30);
    deque.push_back(40);

    for (int i = 0; i < deque.size(); i++)
    {
        cout << deque[i] << endl;

    }

    cout << "deque의 사이즈" << deque.size() << endl;
    deque.pop_front();

    for (int i = 0; i < deque.size(); i++)
    {
            cout << deque[i] << endl;

    }
    */

    // 이중 포인터
    /*
    int a = 10;
    int* ptr = &a;
    int** dptr = &ptr;

    cout << "a의 시작 주소 : " << &a << endl;
    cout << "*dptr의 값은 : " << *dptr << endl;
    cout << "**dptr의 값은 : " << **dptr << endl;
    */

    // 이중 포인터 스왑
    /*
    int a = 10;
    int b = 20;

    int* aptr = &a;
    int* bptr = &b;

    cout << "aptr의 주소 : " << *aptr << endl;
    cout << "bptr의 주소 : " << *bptr << endl;

    CallPoint(&aptr, &bptr);
    PointSwap(&aptr, &bptr);
    CallPoint(&aptr, &bptr);
    */




    return 0;
}
