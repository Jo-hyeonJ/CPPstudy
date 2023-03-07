#pragma once
#include <iostream>

#define SIZE 5
using namespace std;

struct Node
{
    int key;
    int value;
    Node* next;
};

struct Bucket
{
    int size = 0;
    Node* head = NULL;
};

struct Bucket* bucket = new Bucket[SIZE];

int hashFunction(int key)
{
    return key % SIZE;
}

void Insert(int key, int value)
{
    // 1. 노드 추가
    Node* node = new Node;
    node->key = key;
    node->value = value;
    node->next = NULL;

    // 2. 해시 인덱스를 구한다.
    int hashindex = hashFunction(key);

    // 3. 노드를 해당 bucket의 인덱스에 연결하는 작업
    if (bucket[hashindex].size == 0)
    {
        bucket[hashindex].head = node;
        bucket[hashindex].size++;
    }
    else if (bucket[hashindex].size > 0)
    {
        node->next = bucket[hashindex].head;
        bucket[hashindex].head = node;
        bucket[hashindex].size++;
    }
    else
    {
        cout << "비정상적 접근" << endl;
    }
}

int Pop(int index)
{
    int data;
    int off = 1;
    Node* temp = bucket[index].head;

    while (off)
    {
        if (temp->next == NULL)
        {
            data = temp->value;
            temp = bucket[index].head;

            for (int i = 0; i = bucket[index].size - 1; i++)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            bucket[index].size--;
            off = 0;

        }
        else
        {
            temp = temp->next;
        }
    }

    return data;
}

int main()
{
    // 해시 테이블
    /*
    // 해시함수를 통해서 변환된 값을 index로 삼아서 key와 value 형태로 저장하는 자료구조입니다.
    //
    // 해시 함수
    // 복호화가 불가능한 암호를 만드는 함수. key값이 된다.

    // 해시 충돌
    // 같은 key값을 가진 데이터 값이 병목 되는 현상

    // 해시 충돌 해결법
    // 1. 체이닝 기법 (새로 입력 되는 데이터를 단일 연결 리스트로 동적으로 계속 할당하는 것) = O(n)의 시간 복잡도

    // 2. 오픈 주소 개방법 (내용이 빈 배열에 데이터를 기입하는 것, 부족한 공간은 리사이징으로 배열의 크기를 점점 늘린다.)
    */

    for (int i = 0; i < SIZE; i++)
    {
        bucket[i].head = NULL;
        bucket[i].size = 0;

    }


    Insert(0, 10);
    Insert(0, 20);
    Insert(0, 30);
    Insert(0, 40);
    Insert(0, 50);

    cout << Pop(0) << endl;
    cout << Pop(0) << endl;
    cout << Pop(0) << endl;
    cout << Pop(0) << endl;
    cout << Pop(0) << endl;



    return 0;
}