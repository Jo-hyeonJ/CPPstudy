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
            // R 체크문
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
            // L 체크문
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

    // 재귀문
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
    // 퀵 정렬
    // 기점이 되는 키(pivot)를 기준으로 작거나 같은 값을 지닌 데이터는
    // 앞으로 이동하고 큰 값을 지닌 데이터는 뒤로 이동한다.

    // 그리고 작은 값과 큰 값을 분리하면서 정렬하는 알고리즘



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