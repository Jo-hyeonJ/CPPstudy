#pragma once
#define _CRT_SECURE_NO_WARNINGS
// ���ڿ� ���� �Լ� ���� ���� ���� ������ ���� ����

#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���
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
        cout << "���� ���� á��." << endl;
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
        cout << "���� ���������" << endl;
        return 0;
    }

    while (parent * 2 <= index)
    {
        // �� Ǯ��
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
    // �ڷᱸ�� (��)
    /*
    // �ִ񰪰� �ּڰ��� ã�Ƴ��� ������ ������ �����ϱ� ���� ��ȵ�
    // ���� ����Ʈ���� ������� �� �ڷᱸ���Դϴ�.

    // �迭�� ���·� ���������.

    // �ִ� �� : ���� ū ���� ��Ʈ ��忡 �ִ� ����,
    // ���� �θ� ���� �ڽ� ��庸�� ���� Ŀ���Ѵ�.

    // heapify : O(log^n)

    // [0��° �ε����� ����� �� ��� ������ �����̴�.]
    // �θ��带 ã�� ���� : �ڽ� ��� / 2
    // ���� �ڽ� ��带 ã�� ���� : �θ� ��� * 2
    // ������ �ڽ� ��带 ã�� ���� : �θ� ��� *2 +1
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
