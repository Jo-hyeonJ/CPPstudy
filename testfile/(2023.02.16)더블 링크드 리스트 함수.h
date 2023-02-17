#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더


using namespace std;

// 2023.02.15 일부 참조

struct Node
{
    int data;
    Node* next;
    Node* prev;

};

void sort(Node* head, Node* tail)
{

    Node* ptr1 = head->next;
    Node* ptr2;

    // 이전 노드 정렬
    while (ptr1->next != NULL)
    {
        ptr2 = ptr1->next;
        ptr2->prev = ptr1;

        ptr1 = ptr1->next;
    }

    ptr1 = tail->prev;
    // 다음 노드 정렬
    while (ptr1->prev != NULL)
    {
        ptr2 = ptr1->prev;
        ptr2->next = ptr1;

        ptr1 = ptr1->prev;
    }


}

void InsertF(Node* head, int data)
{
    Node* newNode = new Node;
    Node* DNode;

    newNode->data = data;

    DNode = head->next;


    newNode->next = head->next;
    newNode->prev = head;
    head->next = newNode;
    DNode->prev = newNode;

}

void InsertB(Node* tail, int data)
{
    Node* newNode = new Node;
    Node* DNode;
    newNode->data = data;

    DNode = tail->prev;

    newNode->prev = tail->prev;
    newNode->next = tail;
    tail->prev = newNode;
    DNode->next = newNode;
}


void printnodeF(Node* target)
{
    Node* curptr = target->next;

    cout << "앞에서부터 읽은 데이터는 : " << endl;

    while (curptr->next != NULL)
    {

        cout << curptr->data << endl;
        curptr = curptr->next;
    }
}
void printnodeB(Node* target)
{
    Node* curptr = target->prev;

    cout << "뒤에서 부터 읽은 데이터는" << endl;
    while (curptr->prev != NULL)
    {
        cout << curptr->data << endl;
        curptr = curptr->prev;
    }
}
// 매개변수 : 헤드와 삭제할 노드 넘버
void Remove(Node* head, int num)
{

    Node* removePoint = head->next;

    for (int i = 1; i < num; i++)
    {
        removePoint = removePoint->next;
    }

    removePoint->prev->next = removePoint->next;
    removePoint->next->prev = removePoint->prev;

    delete removePoint;

}


int main()
{
    Node* head = new Node;
    Node* tail = new Node;
    head->prev = NULL;
    head->next = tail;

    tail->next = NULL;
    tail->prev = head;

    /*
    Node* node1 = new Node;
    Node* node2 = new Node;
    Node* node3 = new Node;

    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    node1->next = node2;
    node2->next = node3;
    node3->next = tail;

    node1->prev = head;
    node2->prev = node1;
    node3->prev = node2;
    */

    InsertF(head, 30);
    InsertF(head, 20);
    InsertF(head, 10);
    InsertB(tail, 40);
    InsertB(tail, 50);
    InsertB(tail, 60);

    Remove(head, 7);

    printnodeF(head);
    printnodeB(tail);



    return 0;
}
