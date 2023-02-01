#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���

using namespace std;

class Weapon
{
public:
    // ���� �Լ� ����
    virtual void Attack()
    {
        cout << "����" << endl;

    }

    void Information()
    {
        cout << "������ ����" << endl;

    }

};

class Sword : public Weapon
{
public:
    void Attack()
    {
        cout << "������ ����" << endl;

    }

    void Information()
    {
        cout << "���� ����" << endl;

    }
};

class Gun : public Weapon
{
public:
    void Attack()
    {
        cout << "������ ���" << endl;

    }

    void Information()
    {
        cout << "���� ����" << endl;

    }
};

// ĸ��ȭ
/*
 ��ü�� �Ӽ��� �Լ��� �ϳ��� ��� ���� ���� ������ �Ϻθ� ���ο� �����Ͽ�
 ���ߴ� �۾��̴�. �Ӽ� ���� ��ȣ�ϴµ��� ���ȴ�.

 OOP ��ü ���� ���α׷���
 4�� Ư¡
 1. ���
 2. ������
 3. ĸ��ȭ
 4. �߻�ȭ

*/

class Car
{
private:
    int speed;
public:
    void SetPedal(int speed)
    {
        if (speed >= 180)
        {
            speed = 180;
        }
        this->speed = speed;

    }

    int GetSpeed()
    {
        return speed;

    }


};

class Object
{
public:
    // ���� ���� �Լ�
    // �������� ���� ���� �Լ��� ����� ���� Ŭ�������� �������ϱ� ����Ѵ�.
    // ���� ���� �Լ��� �ϳ��� ������ �Ǿ� �ִٸ� �߻� Ŭ������� �����Ѵ�.
    virtual void A() = 0;

};

class NPC : public Object
{
    void A()
    {
        cout << "������" << endl;
    }

};


int main()
{
    // ���� �Լ���?
    /*
    // ����ϴ� Ŭ���� ������ ���� ������ �Լ��� ������ �� �� �ִ� �Լ��Դϴ�.
    // ���ε��� ������Ű�� ����

    // ���� �Լ� ���̺�(vtable)
    // ���� �Լ��� ������ �Լ����� ���� �Ǵ� ���� [key/value]�� ������ ���� �ȴ�.
    //                                   [�Լ���. �̸�/�޸� �ּ�]
    // ������ �����̱⿡ �޸� ��ƸԴ´�


    Weapon* weapon = new Weapon();
    weapon->Attack();

    cout << "Weapon Ŭ������ ũ�� : " << sizeof(weapon) << endl;
    // �Լ� ���� Ŭ������ �޸� ũ��� 1�̿��� ������ ���� �Լ� ũ��� 8�� ������.

    Gun* gun = new Gun();

    weapon = gun;

    weapon->Attack();

    delete weapon;
    */

    // ĸ��ȭ
    /*
    Car car;
    car.SetPedal(2000);

    cout << car.GetSpeed() << endl;
    */

    // ���� ���� �Լ���?
    // �������̽��� ���� Ŭ�������� �����ϱ� ���� ����ϴ� �Լ��̴�.
    // [���� ���� ���� ���� ���� �Լ�]�� �ִٸ� ������ �� ����.

    // Object object; 
    Object* obj; // �ּҰ��� ���� ������ ������ ���x
    NPC npc;



    return 0;
}