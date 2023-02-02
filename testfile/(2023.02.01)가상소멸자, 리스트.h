#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���
#include <list>

using namespace std;

class classA
{
public:
    classA()
    {
        cout << "class A ����" << endl;
    }
    virtual ~classA()
    {
        cout << "class A �Ҹ�" << endl;
    }

};

class classB : public classA
{
public:
    classB()
    {
        cout << "class B ����" << endl;
    }
    void Hello()
    {
        cout << "hi" << endl;

    }

    ~classB()
    {
        cout << "class B �Ҹ�" << endl;
    }

};

int main()
{
    // ���� �Ҹ���
    /*
    // ��ü�� �Ҹ�� �� ���� �����ϰ� �ִ� ��ü�� ������� ��� ȣ��Ǵ� �Ҹ����̴�.
    // [��ĳ����]
    classB* pb = new classB();
    pb->Hello();

    classA* pa = pb;
    // �� ��� ���� ���ı��� �������� ������ pb�� �ּҸ� �޾ƿ͵� classA�� �����Ѵ�.
    delete pa;
    */

    // STL (Standard Template Library)

    list<int> intList;

    intList.push_back(10);
    intList.push_back(20);
    intList.push_back(30);
    intList.push_back(40);

    cout << "intList�� ������ : " << intList.size() << endl;

    // cout << intList[0] << endl; �迭�� �ƴϱ⿡ [n]���� ȣ���� �Ұ���


    // intList.empty() : ����Ʈ�� �����Ͱ� ����ִٸ� true ��ȯ�ϴ� �Լ�
    while (intList.empty() != true)
    {
        // intList.front(): ����Ʈ�� ���� �տ� �ִ� �����͸� ������ִ� �Լ�
        cout << intList.front() << endl;
        // intList.pop_front(): ����Ʈ ���� �տ� �ִ� �����͸� �����ϴ� �Լ�
        intList.pop_front();
    }



    return 0;
}