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

void pop()
{
    if (index != 0)
    {
        cout << heapArray[index--] << endl;
    }
    else
    {
        cout << "�ε����� ����ִ�." << endl;
    }
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

        child--;
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


    for (int i = 1; i <= index; i++)
    {
    cout << heapArray[i] << endl;
    }

    return 0;
}









