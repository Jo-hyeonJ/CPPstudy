#pragma once
#define _CRT_SECURE_NO_WARNINGS
// 문자열 관련 함수 보안 경고로 인한 컴파일 에러 방지

#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더
#include <climits>


using namespace std;

#define SIZE 5

// 원형 큐 (CircleQueue)

// 선형 큐 형식에 인덱스 0을 포함한 전체 인덱스를 모듈러 연산자를 이용해
// 끝없이 순환 시키는 구조이다.
// 전체 인덱스 중 마지막 인덱스는 공백으로 두고 front가 할당 되게 한다.
class Queue
{
private:
    int front = SIZE - 1;
    int rear = SIZE - 1;

public:
    int buffer[SIZE] = { 0, };

    bool Empty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool IsFull()
    {
        if ((rear + 1) % SIZE == front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void Enqueue(int data)
    {
        // 큐가 다 차있으면 데이터를 넣을 수 없도록 처리
        if (IsFull() == true)
        {
            cout << "CircleQueue Is Full" << endl;

        }
        else
        {
            buffer[(rear + 1) % SIZE] = data;
            rear = (rear + 1) % SIZE;

        }

    }

    int Dequeue()
    {
        // 큐가 비어있으면 데이터를 뺄 수 없도록 처리
        if (Empty() == true)
        {
            cout << "CircleQueue is Empty" << endl;

        }
        else
        {
            int temp;
            temp = buffer[(front + 1) % SIZE];
            buffer[(front + 1) % SIZE] = NULL;
            front = (front + 1) % SIZE;

            // 임시 변수 return
            return temp;

        }
    }
};

int main()
{
    Queue queue;

    queue.Enqueue(10);
    queue.Enqueue(20);
    queue.Enqueue(30);
    queue.Enqueue(40);
    queue.Enqueue(50);


    while (!queue.Empty())
    {
        cout << queue.Dequeue() << endl;
    }
    queue.Enqueue(10);
    queue.Enqueue(20);
    queue.Enqueue(30);
    queue.Enqueue(40);
    queue.Enqueue(50);



    while (!queue.Empty())
    {
        cout << queue.Dequeue() << endl;


    }
    queue.Enqueue(10);
    queue.Enqueue(20);
    queue.Enqueue(30);
    queue.Enqueue(40);
    queue.Enqueue(50);



    while (!queue.Empty())
    {
        cout << queue.Dequeue() << endl;


    }

    return 0;
}


