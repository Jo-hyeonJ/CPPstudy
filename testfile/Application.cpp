#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���


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


    //����Ʈ ��ȸ

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










