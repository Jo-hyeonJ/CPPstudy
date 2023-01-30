#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더

using namespace std;

class Cat
{
public :
    int age;
    char blood;
    double weight;

};

class Animal
{
public:
    void Sound()
    {
        cout << "동물의 울음소리" << endl;

    }

};

class Dog : public Animal
{
    
public:
    void Sound()
    {
        cout << "강아지의 울음소리" << endl;
    }
    
};

// 함수의 오버로딩
// '같은 이름의 함수'를 매개 변수의 자료형과 매개 변수의 개수로 구분하여
// 여러 개를 선언할 수 있는 기능이다.

void Vector(float x, float y)
{
    cout << "2차원 Vector 함수" << endl;

}

void Vector(int x, int y)
{
    cout << "2차원 Vector(int) 함수" << endl;

}

void Vector(float x, float y, float z)
{
    cout << "3차원 Vector 함수" << endl;

}

void Vector(int x, int y, int z)
{
    cout << "3차원 Vector(int) 함수" << endl;

}

// 함수의 오버로딩의 경우 함수의 매개 변수에 전달하는 인수의 형태를 보고 호출한다.
// ↓ 반환형은 함수의 오버로딩이 생성 되지 않는다.
// int Vector(int x, int y)

int main()
{
    // 클래스 오프셋
    /*
    // 동일한 프로젝트 안에서 처음부터 주어진 요소나 지점까지의
    // 변위치를 나타내는 정수형이다.

    Cat cat;

    cat.age = 5;
    cat.blood = 'O';
    cat.weight = 5.75f;

    cout << (int)(&(((Cat*)0)->age)) << endl;
    cout << (int)(&(((Cat*)0)->blood)) << endl;
    cout << (int)(&(((Cat*)0)->weight)) << endl;

    cout << "cat의 메모리 크기 : " << sizeof(cat) << endl;
    */

    // 다형성이란?
    // 다수의 서로 다른 객체가 동일한 기능을 서로 다른 방법으로 처리할 수 있는 작업

    // 함수의 오버로딩
    /*
    Vector(10, 20);
    Vector(10, 20, 30);
    Vector(5.75, 25.5f);
    Vector(10.75f, 15.35f, 2.5f);
    */
    
    // 함수의 오버라이딩
    // 상위 클래스에 있는 함수를 하위 클래스(상속)에서 재정의하여 사용하는 기능이다.
    // 하위 클래스에서 함수를 재정의 할 땐 상위 클래스의 함수 형태와 일치해야한다.


    Dog * dog = new Dog();
    dog->Sound();

    Animal* animal = new Animal();

    animal->Sound();

    animal = dog;
    // 정적 바인딩이 일어난다고 함
    animal->Sound();


    delete dog;
    

    return 0;
}










