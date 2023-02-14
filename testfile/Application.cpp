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

void Insert(Node* target, int data)
{
    Node* newNode = new Node;
    newNode->data = data;

    newNode->next = target->next;
    target->next = newNode;
}

void deleteptr(Node* target)
{
    Node* removePtr = target->next;
    target->next = removePtr->next;
    delete removePtr;
}

void sizeptr(Node* target)
{
    int count = 0;
    
    Node* currentptr = target->next;

    while (currentptr != NULL)
    {
        count++;
        
        currentptr = currentptr->next;
    }
    cout << "리스트의 크기 : " << count << endl;

}

int main()
{
    Node* head = new Node;

    head->next = NULL;

    Insert(head, 10);
    Insert(head, 20);
    Insert(head, 30);
    
    deleteptr(head);

    Node* currentptr = head->next;

    while (currentptr != NULL)
    {
        cout << currentptr->data << endl;
        
        currentptr = currentptr->next;
    }

    sizeptr(head);
    

    return 0;
}










