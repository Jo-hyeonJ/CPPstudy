#pragma once
#include <iostream>
#include <random>

using namespace std;

#define SIZE 10


int arr[SIZE];

void QuickSort(int data[], int start, int end)
{
    int pivot = start;
    int left = pivot + 1;
    int right = end;
    bool lr = 0;

    while (left <= right)
    {
        switch (lr)
        {
        default:
            break;
            // R üũ��
        case 0:
            if (data[pivot] >= data[right])
            {
                swap(data[right], data[left]);
                lr = 1;
            }
            else
            {
                right--;
            }
            // L üũ��
        case 1:
            if (data[pivot] < data[left])
            {
                lr = 0;
            }
            else
            {
                left++;
            }
        }
    }
    if (left > right)
    {
        swap(data[pivot], data[right]);
    }

    // ��͹�
    if (right - 1 > 0)
    {
        QuickSort(arr, 0, right - 1);
    }

    if (right + 1 < end)
    {
        QuickSort(arr, right + 1, end);
    }

}


int main()
{
    // �� ����
    // ������ �Ǵ� Ű(pivot)�� �������� �۰ų� ���� ���� ���� �����ʹ�
    // ������ �̵��ϰ� ū ���� ���� �����ʹ� �ڷ� �̵��Ѵ�.

    // �׸��� ���� ���� ū ���� �и��ϸ鼭 �����ϴ� �˰���



    for (int i = 0; i < SIZE - 1; i++)
    {
        arr[i] = rand() % 10;
    }

    QuickSort(arr, 0, SIZE - 1);

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << endl;
    }



    return 0;
}