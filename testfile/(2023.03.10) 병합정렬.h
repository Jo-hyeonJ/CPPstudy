#pragma once
#include <iostream>
#include <random>

using namespace std;
#define SIZE 8


int arr[8] = { 5,3,1,2,4,7,6,8 };

void MergeSort(int data[], int start, int middle, int end)
{
    // left ����, right����, ���� ��ų �迭�� �ε����� ������Ű�� ����(temp)

    int temp = start;
    int left = start;
    int right = middle + 1;

    while (left <= middle && right <= end)
    {
        if (data[left] <= data[right])
        {
            data[temp++] = data[left++];
        }

        else
        {
            data[temp++] = data[right++];
        }
    }
    if (left > middle)
    {
        for (int x = right; x <= end; x++)
        {
            data[temp++] = data[right++];
        }
    }

    else
    {
        for (int x = left; x <= middle; x++)
        {
            data[temp++] = data[left++];
        }
    }

    for (int i = start; i <= end; i++)
    {
        data[i] = arr[i];
    }

}

void Division(int data[], int left, int right)
{
    if (left < right)
    {
        // middle ���� ����
        int middle = (left + right) / 2;

        if (0 < middle)
        {
            // ���� ���� ��� �Լ�
            Division(data, left, middle);

            // ������ ���� ���
            Division(data, middle + 1, right);
        }

        MergeSort(arr, left, middle, right);

    }



}


int main()
{
    // ���ڿ� ������
    /*
    string str = "apple";


    string rstr;

    rstr = str;

    int count = 0;

    // �ڸ��� ���ϱ�
    for (int i = 0; str[i] != NULL; i++)
    {
        count++;
    }

    // ���迭�� ����ֱ�
    for (int i = 1; i <= count; i++)
    {
        int rcount = count -i;
        rstr[rcount] = str[i-1];
    }

    cout << str << endl;
    cout << rstr << endl;


    for (int i = 0; i < str.length() / 2; i++)
    {
        swap(str[i], str[str.length() - 1 - i]);
    }

    cout << str;

    */

    // ���� ����
    // �ϳ��� ����Ʈ�� �� ���� �յ��� ũ��� �����ϰ�
    // ���ҵ� �κ� ����Ʈ�� ������ ����, �� ���� ���ĵ� �κ� ����Ʈ�� ���Ͽ�
    // ��ü�� ���ĵ� ����Ʈ�� �ǵ��� �����ϴ� �˰����̴�.

    Division(arr, 0, 7);

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << endl;

    }


    return 0;
}