#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���


using namespace std;

int main()
{
    // ���� �˰��� [���ɰ� ���̵��� �����]
    // ���̵� �� : ��ǰ ����, ���� ����, ���� ����
    //  �� : �� ����, ��� ����, �� ����, ���� ����
    //  �� : �������� ����, ��� ����

    // ��ǰ ����
    // ���� ������ �� ������ ��Ҹ� ����Ͽ�, ���ǿ� ���� �ʴٸ� �ڸ���
    // ��ȯ�Ͽ� �����ϴ� �˰����̴�.
    // �ð� ���⵵(O n��)

    int array[5] = { 7, 43, 1, 11, 3 };


    for (int c = 4; c != 0; c--)
    {
        for (int i = 0; i < c; i++)
        {
            if (array[i] > array[i + 1])
            {
                /*
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                */ // ���ҹ�
                swap(array[i], array[i + 1]);
            }

        }
    }


    for (int i = 0; i <= 4; i++)
        cout << array[i] << endl;






    return 0;
}
