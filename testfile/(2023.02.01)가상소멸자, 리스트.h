#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더
#include <list>

using namespace std;

class classA
{
public:
    classA()
    {
        cout << "class A 생성" << endl;
    }
    virtual ~classA()
    {
        cout << "class A 소멸" << endl;
    }

};

class classB : public classA
{
public:
    classB()
    {
        cout << "class B 생성" << endl;
    }
    void Hello()
    {
        cout << "hi" << endl;

    }

    ~classB()
    {
        cout << "class B 소멸" << endl;
    }

};

int main()
{
    // 가상 소멸자
    /*
    // 객체가 소멸될 때 현재 참조하고 있는 객체와 상관없이 모두 호출되는 소멸자이다.
    // [업캐스팅]
    classB* pb = new classB();
    pb->Hello();

    classA* pa = pb;
    // ↑ 상속 관계 형식까지 가져오기 때문에 pb의 주소를 받아와도 classA를 참조한다.
    delete pa;
    */

    // STL (Standard Template Library)

    list<int> intList;

    intList.push_back(10);
    intList.push_back(20);
    intList.push_back(30);
    intList.push_back(40);

    cout << "intList의 사이즈 : " << intList.size() << endl;

    // cout << intList[0] << endl; 배열이 아니기에 [n]으로 호출이 불가능


    // intList.empty() : 리스트에 데이터가 비어있다면 true 반환하는 함수
    while (intList.empty() != true)
    {
        // intList.front(): 리스트에 가장 앞에 있는 데이터를 출력해주는 함수
        cout << intList.front() << endl;
        // intList.pop_front(): 리스트 가장 앞에 있는 데이터를 제거하는 함수
        intList.pop_front();
    }



    return 0;
}