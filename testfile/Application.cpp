#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더

using namespace std;

class Monster
{
public:
    int health;
    static int count;

    // this 포인터
    // 자기 자신을 가르키는 포인터 (자신의 주소값을 가진다.) = 상수 값이라 수정 불가

    Monster(int health)
    {
        this -> health = health;

    }

    void Tracking()
    {
        cout << this << "가 호출했습니다." << endl;
        cout << "몬스터 추적" << endl;
    }

    ~Monster()
    {
        count++;
        cout << "몬스터를 처치한 횟수 : " << count << endl;
    }
};

// static 멤버 변수는 모든 객체들이 접근해야 하므로 프로그램 시작부터 끝까지 유지
// 되어야 하기에 전역 범위에서만 정의할 수 있다.
int Monster::count = 0;

class KeyBoard
{
public:
    bool power;

    void Typing()
    {
        cout << "키보드 입력" << endl;
    }
};

class Mouse
{
public:
    bool power;

    void Drag()
    {
        cout << "마우스 드래그" << endl;
    }

};

class Computer : public Mouse, public KeyBoard 
{
public:
    void use()
    {
        Mouse::power = true;
        Typing();
        Drag();

    }
};


int main()
{
    // 정적 변수
    /*
    // static : 전역 변수와 지역 변수의 특징을 모두 가진 변수
    Monster * m1 = new Monster;
    m1->health = 100;

    delete m1;

    Monster* m2 = new Monster;
    m2->health = 100;

    delete m2;
    */

    Monster m1(100);
    Monster m2(125);
    Monster m3(175);

    m1.Tracking();
    m2.Tracking();
    m3.Tracking();

    // 다중 상속
    // 복수의 상위 클래스에게 상속을 받는 상속
    // 여러 개의 상위 클래스에 중복 되는 속성이 존재 할 수 있기 때문에
    // 범위지정연산자로 특정성을 부여한다.

    Computer computer;
    computer.use();
    computer.::Mouse::power = true; //부모가 둘 다 가진 요소는 모호성이 발생함
    // 특정성을 가지기 위해 범위 지정연산자(::)를 통해 상위 클래스의 이름을 선언하고
    // 속성을 이용 할 수 있다.

    return 0;
}