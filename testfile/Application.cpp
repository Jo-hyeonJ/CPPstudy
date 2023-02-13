#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더


using namespace std;

struct Node
{
    int data;
    Node* next;
};


int main()
{
    Node* node = new Node;
    Node* node1 = new Node;
    Node* node2 = new Node;

    node->next = node1;

    node1->data = 10;
    node1->next = node2;

    node2->data = 20;
    node2->next = nullptr;


    //리스트 순회

    Node* currentPointer = node->next;

    while (currentPointer != NULL)
    {
        
        cout << currentPointer->data << endl;
        currentPointer = currentPointer->next;
    }

    delete node;

    delete node1;

    delete node2;

    return 0;
}










