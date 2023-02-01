#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더

using namespace std;

class Weapon
{
public:
    // 가상 함수 선언
    virtual void Attack()
    {
        cout << "공격" << endl;

    }

    void Information()
    {
        cout << "무기의 정보" << endl;

    }

};

class Sword : public Weapon
{
public:
    void Attack()
    {
        cout << "검으로 베기" << endl;

    }

    void Information()
    {
        cout << "검의 정보" << endl;

    }
};

class Gun : public Weapon
{
public:
    void Attack()
    {
        cout << "총으로 쏘기" << endl;

    }

    void Information()
    {
        cout << "총의 정보" << endl;

    }
};

// 캡슐화
/*
 객체의 속성과 함수를 하나로 묶어서 실제 구현 내용의 일부를 내부에 은닉하여
 감추는 작업이다. 속성 값을 보호하는데에 사용된다.

 OOP 객체 지향 프로그래밍
 4대 특징
 1. 상속
 2. 다형성
 3. 캡슐화
 4. 추상화

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
    // 순수 가상 함수
    // 정의하지 않은 가상 함수를 만들어 하위 클래스에서 재정의하길 기대한다.
    // 순수 가상 함수가 하나라도 포함이 되어 있다면 추상 클래스라고 정의한다.
    virtual void A() = 0;

};

class NPC : public Object
{
    void A()
    {
        cout << "ㅇㄱㅇ" << endl;
    }

};


int main()
{
    // 가상 함수란?
    /*
    // 상속하는 클래스 내에서 같은 형태의 함수로 재정의 될 수 있는 함수입니다.
    // 바인딩을 지연시키는 형식

    // 가상 함수 테이블(vtable)
    // 가상 함수로 정의한 함수들이 저장 되는 공간 [key/value]로 나뉘어 저장 된다.
    //                                   [함수의. 이름/메모리 주소]
    // 포인터 형식이기에 메모리 잡아먹는다


    Weapon* weapon = new Weapon();
    weapon->Attack();

    cout << "Weapon 클래스의 크기 : " << sizeof(weapon) << endl;
    // 함수 뿐인 클래스라 메모리 크기는 1이여야 하지만 가상 함수 크기로 8이 잡힌다.

    Gun* gun = new Gun();

    weapon = gun;

    weapon->Attack();

    delete weapon;
    */

    // 캡슐화
    /*
    Car car;
    car.SetPedal(2000);

    cout << car.GetSpeed() << endl;
    */

    // 순수 가상 함수란?
    // 인터페이스를 하위 클래스에게 전달하기 위해 사용하는 함수이다.
    // [정의 되지 않은 순수 가상 함수]가 있다면 생성할 수 없다.

    // Object object; 
    Object* obj; // 주소값만 받은 포인터 생성은 상관x
    NPC npc;



    return 0;
}