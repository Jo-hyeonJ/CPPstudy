#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���
#include <vector>
#include <random>
#include <conio.h>

using namespace std;

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

int main()
{
    // [��Ʈ�� + H] ��ü ��ü

    // ����
    /*
    // �������� �������� �޸𸮸� �Ҵ��ϰ� ���� �ð���
    // �޸� ũ�⸦ ���� �� �� �ִ� �����̳��̴�.
    // 1.�迭�� �ٸ��� ���� �޸𸮸� �Ҵ� �ޱ⿡ �� ������ �޸𸮸� �Ҵ� �޴´�.
    // 2.�޸� ũ�Ⱑ ���� �Ǹ� ���� �ּҸ� �Ҵ� �����ϰ� ���ο� ���� �ּҸ� ���´�.
    // 3. ���� �� ������ ������ �״�� �����ϱ� ������
    //    �޺κ����θ� �������� �߰����Ű� �����ϴ�.

    vector<int> intVector;

    // push_back() : ������ �޸� ���� ���� ���� �����ϴ� �Լ�

    intVector.push_back(100);
    intVector.push_back(200);
    intVector.push_back(300);
    intVector.push_back(400);
    intVector.push_back(500);



    for (int i = 0; i < intVector.size(); i++)
    {
        cout << intVector[i] << endl;

    }

    // pop_back() : ������ �޸� ���� ���� ���� �����ϴ� �Լ�.
    intVector.pop_back();
    intVector.pop_back();
    intVector.pop_back();
    intVector.pop_back();
    intVector.pop_back();

    cout << "������ �޸𸮴� ����ִ°�? " << intVector.empty() << endl;

    cout << "������ �޸� ũ���? " << intVector.size() << endl;

    cout << "������ �޸𸮰� �Ҵ� �� ���� : " << intVector.capacity() << endl;
    */

    // ���� ����

    srand(time(NULL));
    vector<string> arrow = { "��", "��", "��", "��" };
    vector<string> Q = { "1", "1", "1", "1", "1" };

    char key;
    int mode = 0;
    int nan = 5;


    while (1)
    {

        while (mode == 0)
        {
            for (int i = nan - 1; i >= 0; i--)
            {
                int ar = rand() % 4;

                cout << arrow[ar] << "  �� �Է��ϼ���." << endl;

                Q[i] = arrow[ar];

            }

            // ���̵� ����
            if (nan > 10)
            {
                nan = 10;
            }


            // ��� ����
            mode = 1;
        }

        while (mode == 1)
        {
            // Ű�Է�
            if (_kbhit())
            {
                key = _getch();

                switch (key)
                {
                case UP:
                    cout << "��  ";
                    if ("��" == Q.back())
                    {
                        Q.pop_back();
                    }
                    break;

                case LEFT:
                    cout << "��  ";
                    if ("��" == Q.back())
                    {
                        Q.pop_back();
                    }
                    break;

                case RIGHT:
                    cout << "��  ";
                    if ("��" == Q.back())
                    {
                        Q.pop_back();
                    }
                    break;

                case DOWN:
                    cout << "��  ";
                    if ("��" == Q.back())
                    {
                        Q.pop_back();
                    }
                    break;
                }
            }


            if (Q.empty() == 1)
            {
                cout << endl << "���߾��" << endl;

                cout << "�ٽ�!" << endl;

                Q = { "1", "1", "1", "1", "1" };
                mode = 0;
            }


        }



    }



    return 0;
}