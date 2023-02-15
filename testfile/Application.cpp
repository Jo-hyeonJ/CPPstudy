#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���


using namespace std;

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

    // ���� ��� ����
    while (ptr1->next != NULL)
    {
        ptr2 = ptr1->next;
        ptr2->prev = ptr1;

        ptr1 = ptr1->next;
    }

    ptr1 = tail->prev;
    // ���� ��� ����
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

    cout << "�տ������� ���� �����ʹ� : " << endl;

    while (curptr->next != NULL)
    {

        cout << curptr->data << endl;
        curptr = curptr->next;
    }
}
void printnodeB(Node* target)
{
    Node* curptr = target->prev;

    cout << "�ڿ��� ���� ���� �����ʹ�" << endl;
    while (curptr->prev != NULL)
    {
        cout << curptr->data << endl;
        curptr = curptr->prev;
    }
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

    InsertF(head, 10);
    InsertF(head, 20);
    InsertF(head, 30);
    InsertB(tail, 40);
    InsertB(tail, 50);
    InsertB(tail, 60);

    printnodeF(head);
    printnodeB(tail);



    return 0;
}










