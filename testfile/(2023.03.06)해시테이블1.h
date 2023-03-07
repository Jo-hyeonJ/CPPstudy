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
    // 1. ��� �߰�
    Node* node = new Node;
    node->key = key;
    node->value = value;
    node->next = NULL;

    // 2. �ؽ� �ε����� ���Ѵ�.
    int hashindex = hashFunction(key);

    // 3. ��带 �ش� bucket�� �ε����� �����ϴ� �۾�
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
        cout << "�������� ����" << endl;
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
    // �ؽ� ���̺�
    /*
    // �ؽ��Լ��� ���ؼ� ��ȯ�� ���� index�� ��Ƽ� key�� value ���·� �����ϴ� �ڷᱸ���Դϴ�.
    //
    // �ؽ� �Լ�
    // ��ȣȭ�� �Ұ����� ��ȣ�� ����� �Լ�. key���� �ȴ�.

    // �ؽ� �浹
    // ���� key���� ���� ������ ���� ���� �Ǵ� ����

    // �ؽ� �浹 �ذ��
    // 1. ü�̴� ��� (���� �Է� �Ǵ� �����͸� ���� ���� ����Ʈ�� �������� ��� �Ҵ��ϴ� ��) = O(n)�� �ð� ���⵵

    // 2. ���� �ּ� ����� (������ �� �迭�� �����͸� �����ϴ� ��, ������ ������ ������¡���� �迭�� ũ�⸦ ���� �ø���.)
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