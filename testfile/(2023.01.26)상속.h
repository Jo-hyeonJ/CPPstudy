#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���

using namespace std;

// #pragma pack(1)
// ����Ʈ �е��� ���� �ʰ� 1����Ʈ�� ����ϴ� ��ó����
// #pragma region


class Unit
{
public: // ����Ʈ �е��� ���� �Ǿ� �ǻ�뷮�� 11����Ʈ���� 16����Ʈ�� �����Ѵ�.
    char grade;
    int health;
    short mp;
    int attack;

    Unit()
    {
        cout << "Unit ��ü ����" << endl;
    }

    void Skill(string skillName)
    {
        cout << skillName << endl;
    }

    ~Unit()
    {
        cout << "Unit ��ü �ı�" << endl;
    }

};

// protected ���
// ��� ���� �Ӽ� �� public ���� �����ڸ� ��� protected�� �ٲ۴�.
//               �� ���� ������
class Ghost : protected Unit
{
private:
    int defense = 3;

public:
    Ghost()
    {
        health = 100;
        attack = 25;

        //Skill("Lock Down");
        cout << "Ghost ��ü ����" << endl;
    }

    ~Ghost()
    {
        cout << "Ghost ��ü �ı�" << endl;
    }
};


// private ���
// ��� ���� Ŭ������ private���� ���� ������ ���� ���� �����ڸ� ���
// private�� �����ϴ� ����̴�.                    (public, protected)

//           ������ ������ [private]�� ������ ��� ���� �Ӽ��� ��� private�� �ٲ۴�.
class Duran : private Ghost
{
public:
    Duran()
    {
        health = 300;
        attack = 30;
        // defense = 30; private�� ���� �Ǿ��� ������ �����������Ѵ�.
        // ������ ��� ��ü�� �޴´�.

        //Skill("Clocking");

        cout << "Duran ��ü ����" << endl;
    }
    ~Duran()
    {
        cout << "Duran ��ü �ı�" << endl;
    }

};


int main()
{
    // ����̶�?
    /*
    // ���� Ŭ������ �Ӽ��� ���� Ŭ������ ��� �� �� �ֵ��� �������ִ� ����̴�.

    Unit unit;
    //Ghost ghost;


    cout << "unit�� �޸� ũ�� : " << sizeof(unit) << endl;
    //cout << "ghost�� �޸� ũ�� : " << sizeof(ghost) << endl;

    Duran duran;
    cout << "duran�� �޸� ũ�� : " << sizeof(duran) << endl;

    // �����ڴ� ��� ���� Ŭ������ ���� �������� ������� �ҷ�����
    // �Ҹ��ڴ� �ҷ��� ������ �������� �ۿ��Ѵ�.
    */




    return 0;
}