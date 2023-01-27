#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더

using namespace std;

// #pragma pack(1)
// 바이트 패딩을 하지 않고 1바이트로 계산하는 전처리기
// #pragma region


class Unit
{
public: // 바이트 패딩이 적용 되어 실사용량은 11바이트지만 16바이트를 차지한다.
    char grade;
    int health;
    short mp;
    int attack;

    Unit()
    {
        cout << "Unit 객체 생성" << endl;
    }

    void Skill(string skillName)
    {
        cout << skillName << endl;
    }

    ~Unit()
    {
        cout << "Unit 객체 파괴" << endl;
    }

};

// protected 상속
// 상속 받은 속성 중 public 접근 지정자를 모두 protected로 바꾼다.
//               ↓ 접근 지정자
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
        cout << "Ghost 객체 생성" << endl;
    }

    ~Ghost()
    {
        cout << "Ghost 객체 파괴" << endl;
    }
};


// private 상속
// 상속 받은 클래스가 private보다 접근 범위가 넓은 접근 지정자를 모두
// private로 설정하는 상속이다.                    (public, protected)

//           ↓접근 지정자 [private]로 지정시 상속 받은 속성을 모두 private로 바꾼다.
class Duran : private Ghost
{
public:
    Duran()
    {
        health = 300;
        attack = 30;
        // defense = 30; private로 설정 되었기 때문에 수정하지못한다.
        // 하지만 상속 자체는 받는다.

        //Skill("Clocking");

        cout << "Duran 객체 생성" << endl;
    }
    ~Duran()
    {
        cout << "Duran 객체 파괴" << endl;
    }

};


int main()
{
    // 상속이란?
    /*
    // 상위 클래스의 속성을 하위 클래스가 사용 할 수 있도록 설정해주는 기능이다.

    Unit unit;
    //Ghost ghost;


    cout << "unit의 메모리 크기 : " << sizeof(unit) << endl;
    //cout << "ghost의 메모리 크기 : " << sizeof(ghost) << endl;

    Duran duran;
    cout << "duran의 메모리 크기 : " << sizeof(duran) << endl;

    // 생성자는 상속 받은 클래스를 전부 상위부터 순서대로 불러오고
    // 소멸자는 불러온 순서의 역순으로 작용한다.
    */




    return 0;
}