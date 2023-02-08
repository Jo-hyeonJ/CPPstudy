#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더


using namespace std;

class Person
{
public:


    virtual void Talk()
    {
        cout << "말하기" << endl;
    }
};

class Student : public Person
{
public:
    void Study()
    {
        cout << "학습 중~" << endl;
    }
    // 함수에 붙일 때 : 특정한 위치까지만 함수 재정의를 제한하는 키워드이다.
    // 클래스에 붙일 때 : 상속을 제한하는 키워드이다. 
    void Talk() final
    {
        cout << "학생이 질문한다." << endl;
    }

};
//                  ↓ 이후 클래스를 상속 시킬 수 없다.
class ModelStudent final : public Student
{
public:
   
    int lala;

};

class A
{
public : 
    void AClass()
    {
        cout << "A 클래스입니다." << endl;
    }
    virtual void Attack()
    {
        cout << "공격" << endl;
    }

    virtual void move()
    {
        cout << "이동" << endl;
    }
};
class B : public A
{
public :
    void BClass()
    {
        
        cout << "B 클래스입니다." << endl;
    }
    void Attack()
    {
        cout << "칼 들고 공격" << endl;
    }

    void move()
    {
        cout << "칼 들고 이동" << endl;
    }


};

// 서치 키워드 : 스마트 포인터

int main()
{
    // final 키워드
    /*
    // 상속 받는 대상에게 오버라이딩 시키지 않고 싶은 속성에게 부여하는 키워드
    // 이후 상속 받는 대상은 final 키워드를 받은 속성을 상속 받되 수정할 수 없다.

    Person person;
    Student student;
    ModelStudent MS;

    cout << "Person의 크기 : " << sizeof(person) << endl;
    cout << "Student의 크기 : " << sizeof(student) << endl;
    cout << "ModelStudent의 크기 : " << sizeof(MS) << endl;
    */

    // 업캐스팅 [상위 클래스 <- 하위 클래스]
    /*
    // 하위 클래스의 정보를 담을 수 있는 객체에 상위 클래스의 자료형을 부여해서
    // 상위클래스처럼 사용하는 캐스팅이다.

    A* aptr = new A();
    B* bptr = new B();
    aptr = bptr;
    aptr->BClass();
    // B의 주소를 담았지만 BClass의 함수를 사용하지 못함
    */

    // 다운 캐스팅 [하위 클래스 <- 상위 클래스]
    /*
    // 하위의 클래스에 상위 클래스를 삽입하는건 강제적 형변환이 필요하다.
    // 참조하는 형태에 맞는 함수 정의만을 사용 할 수 있지만
    // 가상 함수를 활용하여 변화를 줄 수 있다.
    
    B* bptr = (B*)new A;
    bptr->Attack();
    bptr->move();

    int select = 0;
    cin >> select;

    A* aptr = nullptr;

    switch (select)
    {
    case 1:
        aptr = new B();
        break;
    }

    aptr->Attack();


    delete bptr;

    */

    return 0;
}










