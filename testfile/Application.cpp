#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더

using namespace std;

class IPhone
{
public:
    int size;
    int price;
    int* version;


    IPhone()
    {
        version = new int;
        cout << "기본 생성자 호출" << endl;
    }

    // 복사 생성자
    IPhone(const IPhone& copyIPhone) // 읽기 전용으로 생성 가능
    {
        // 깊은 복사란?
        // 객체를 복사할 때, 참조 값이 아닌 인스턴스 자체를 새로 복사하여
        // 서로 다른 메모리를 생성하는 복사이다.

        size = copyIPhone.size;
        price = copyIPhone.price;

        version = new int; // 동적 메모리로 받아준다. 각각 다른 메모리를 가지게 함.
        *version = *copyIPhone.version;

        cout << "복사 생성자 호출" << endl;

        cout << "size : " << size << endl;
        cout << "price : " << price << endl;
        cout << "version : " << *version << endl;
    }
    
    ~IPhone()
    {
        delete version;
    }
    
};

int main()
{
    // 복사 생성자란?
    /*
    // 같은 객체를 복사하여 생성시킬 때 호출되는 생성자입니다.
    IPhone se1;

    se1.price = 100000;
    se1.size = 5;

    IPhone se2 = se1;
    */

    // 얕은 복사
    /*
    // 객체를 복사할 때 주솟값을 복사하여 같은 메모리를 가르키는 복사이다.
    // -> 따로 값을 가지지 못하고 메모리 해제시 오류 발생 가능성 있음

    int* ptr1 = new int;
    *ptr1 = 10000;

    int* ptr2 = ptr1;
    *ptr2 = 3000;

    cout << "ptr1의 값 : " << *ptr1 << endl;
    cout << "ptr2의 값 : " << *ptr2 << endl;

    delete ptr1;
    // delete ptr2; 이미 해제된 메모리를 해제하려 시도한 것 (오류 발생)
    */

    IPhone se1;

    *se1.version = 10;
    se1.price = 100000;
    se1.size = 5;

    IPhone se2 = se1;
    *se2.version = 20;

    cout << "*se1.version의 값 : " << *se1.version << endl;
    cout << "*se2.version의 값 : " << *se2.version << endl;

    // 깊은 복사란?
    // 객체를 복사할 때, 참조 값이 아닌 인스턴스 자체를 새로 복사하여
    // 서로 다른 메모리를 생성하는 복사이다.



    return 0;
}