#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���
#include <deque> // ��ũ

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
    cout << "aptr�� �ּ�: " << **x << endl;
    cout << "bptr�� �ּ�: " << **y << endl;

}



int main()
{
    // Deque(��ũ)
    /*
    // LIFO�� FIFO�� ���ÿ� ������

    deque<int> deque;

    deque.push_back(10);
    deque.push_back(20);
    deque.push_back(30);
    deque.push_back(40);

    for (int i = 0; i < deque.size(); i++)
    {
        cout << deque[i] << endl;

    }

    cout << "deque�� ������" << deque.size() << endl;
    deque.pop_front();

    for (int i = 0; i < deque.size(); i++)
    {
            cout << deque[i] << endl;

    }
    */

    // ���� ������
    /*
    int a = 10;
    int* ptr = &a;
    int** dptr = &ptr;

    cout << "a�� ���� �ּ� : " << &a << endl;
    cout << "*dptr�� ���� : " << *dptr << endl;
    cout << "**dptr�� ���� : " << **dptr << endl;
    */

    // ���� ������ ����
    /*
    int a = 10;
    int b = 20;

    int* aptr = &a;
    int* bptr = &b;

    cout << "aptr�� �ּ� : " << *aptr << endl;
    cout << "bptr�� �ּ� : " << *bptr << endl;

    CallPoint(&aptr, &bptr);
    PointSwap(&aptr, &bptr);
    CallPoint(&aptr, &bptr);
    */




    return 0;
}
