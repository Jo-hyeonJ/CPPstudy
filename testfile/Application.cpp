#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���


using namespace std;

class Person
{
public:


    virtual void Talk()
    {
        cout << "���ϱ�" << endl;
    }
};

class Student : public Person
{
public:
    void Study()
    {
        cout << "�н� ��~" << endl;
    }
    // �Լ��� ���� �� : Ư���� ��ġ������ �Լ� �����Ǹ� �����ϴ� Ű�����̴�.
    // Ŭ������ ���� �� : ����� �����ϴ� Ű�����̴�. 
    void Talk() final
    {
        cout << "�л��� �����Ѵ�." << endl;
    }

};
//                  �� ���� Ŭ������ ��� ��ų �� ����.
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
        cout << "A Ŭ�����Դϴ�." << endl;
    }
    virtual void Attack()
    {
        cout << "����" << endl;
    }

    virtual void move()
    {
        cout << "�̵�" << endl;
    }
};
class B : public A
{
public :
    void BClass()
    {
        
        cout << "B Ŭ�����Դϴ�." << endl;
    }
    void Attack()
    {
        cout << "Į ��� ����" << endl;
    }

    void move()
    {
        cout << "Į ��� �̵�" << endl;
    }


};

// ��ġ Ű���� : ����Ʈ ������

int main()
{
    // final Ű����
    /*
    // ��� �޴� ��󿡰� �������̵� ��Ű�� �ʰ� ���� �Ӽ����� �ο��ϴ� Ű����
    // ���� ��� �޴� ����� final Ű���带 ���� �Ӽ��� ��� �޵� ������ �� ����.

    Person person;
    Student student;
    ModelStudent MS;

    cout << "Person�� ũ�� : " << sizeof(person) << endl;
    cout << "Student�� ũ�� : " << sizeof(student) << endl;
    cout << "ModelStudent�� ũ�� : " << sizeof(MS) << endl;
    */

    // ��ĳ���� [���� Ŭ���� <- ���� Ŭ����]
    /*
    // ���� Ŭ������ ������ ���� �� �ִ� ��ü�� ���� Ŭ������ �ڷ����� �ο��ؼ�
    // ����Ŭ����ó�� ����ϴ� ĳ�����̴�.

    A* aptr = new A();
    B* bptr = new B();
    aptr = bptr;
    aptr->BClass();
    // B�� �ּҸ� ������� BClass�� �Լ��� ������� ����
    */

    // �ٿ� ĳ���� [���� Ŭ���� <- ���� Ŭ����]
    /*
    // ������ Ŭ������ ���� Ŭ������ �����ϴ°� ������ ����ȯ�� �ʿ��ϴ�.
    // �����ϴ� ���¿� �´� �Լ� ���Ǹ��� ��� �� �� ������
    // ���� �Լ��� Ȱ���Ͽ� ��ȭ�� �� �� �ִ�.
    
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










