#pragma once
#define _CRT_SECURE_NO_WARNINGS
// 문자열 관련 함수 보안 경고로 인한 컴파일 에러 방지

#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더
#include <climits>

#define SIZE 8

using namespace std;

int heapArray[SIZE] = { 0, };
int index = 0;

void heapify();

void Insert(int data)
{
    if (index < SIZE - 1)
    {
        heapArray[++index] = data;
    }
    else
    {
        cout << "힙이 가득 찼다." << endl;
    }

    heapify();
}

int Delete()
{
    int result = heapArray[1];
    int parent = 1;
    int child = parent * 2;


    if (index != 0)
    {
        heapArray[1] = 0;
        swap(heapArray[1], heapArray[index]);
        index--;
    }
    else
    {
        cout << "힙이 비어져있음" << endl;
        return 0;
    }

    while (parent * 2 <= index)
    {
        // 내 풀이
       /*
        if (heapArray[parent] < heapArray[child])
        {
            swap(heapArray[parent], heapArray[child]);
        }
        child = parent * 2 + 1;

        if (heapArray[parent] < heapArray[child])
        {
            swap(heapArray[parent], heapArray[child]);
        }

        parent++;
        child = parent * 2;
        */
        if (heapArray[child] < heapArray[child + 1])
        {
            child++;
        }

        if (heapArray[child] < heapArray[parent])
        {
            break;
        }

        swap(heapArray[parent], heapArray[child]);
        parent = child;
    }

    return result;
}

void heapify()
{
    int child = index;
    int parent = index / 2;

    while (child != 1)
    {
        if (heapArray[parent] < heapArray[child])
        {
            swap(heapArray[parent], heapArray[child]);
        }

        child = parent;
        parent = child / 2;
    }
}


int main()
{
    // 자료구조 (힙)
    /*
    // 최댓값과 최솟값을 찾아내는 연산을 빠르게 수행하기 위해 고안된
    // 완전 이진트리를 기반으로 한 자료구조입니다.

    // 배열의 형태로 만들어진다.

    // 최대 힙 : 가장 큰 값이 루트 노드에 있는 형태,
    // 또한 부모 노드는 자식 노드보다 값이 커야한다.

    // heapify : O(log^n)

    // [0번째 인덱스를 비웠을 때 사용 가능한 공식이다.]
    // 부모노드를 찾는 공식 : 자식 노드 / 2
    // 왼쪽 자식 노드를 찾는 공식 : 부모 노드 * 2
    // 오른쪽 자식 노드를 찾는 공식 : 부모 노드 *2 +1
    */

    Insert(8);
    Insert(20);
    Insert(17);
    Insert(7);
    Insert(3);
    Insert(2);
    Insert(33);


    for (int i = index; i != 0; i--)
    {
        cout << Delete() << endl;
    }


    return 0;
}
