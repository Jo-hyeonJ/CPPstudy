#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���

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
        cout << "������ �����Ҹ�" << endl;

    }

};

class Dog : public Animal
{
    
public:
    void Sound()
    {
        cout << "�������� �����Ҹ�" << endl;
    }
    
};

// �Լ��� �����ε�
// '���� �̸��� �Լ�'�� �Ű� ������ �ڷ����� �Ű� ������ ������ �����Ͽ�
// ���� ���� ������ �� �ִ� ����̴�.

void Vector(float x, float y)
{
    cout << "2���� Vector �Լ�" << endl;

}

void Vector(int x, int y)
{
    cout << "2���� Vector(int) �Լ�" << endl;

}

void Vector(float x, float y, float z)
{
    cout << "3���� Vector �Լ�" << endl;

}

void Vector(int x, int y, int z)
{
    cout << "3���� Vector(int) �Լ�" << endl;

}

// �Լ��� �����ε��� ��� �Լ��� �Ű� ������ �����ϴ� �μ��� ���¸� ���� ȣ���Ѵ�.
// �� ��ȯ���� �Լ��� �����ε��� ���� ���� �ʴ´�.
// int Vector(int x, int y)

int main()
{
    // Ŭ���� ������
    /*
    // ������ ������Ʈ �ȿ��� ó������ �־��� ��ҳ� ����������
    // ����ġ�� ��Ÿ���� �������̴�.

    Cat cat;

    cat.age = 5;
    cat.blood = 'O';
    cat.weight = 5.75f;

    cout << (int)(&(((Cat*)0)->age)) << endl;
    cout << (int)(&(((Cat*)0)->blood)) << endl;
    cout << (int)(&(((Cat*)0)->weight)) << endl;

    cout << "cat�� �޸� ũ�� : " << sizeof(cat) << endl;
    */

    // �������̶�?
    // �ټ��� ���� �ٸ� ��ü�� ������ ����� ���� �ٸ� ������� ó���� �� �ִ� �۾�

    // �Լ��� �����ε�
    /*
    Vector(10, 20);
    Vector(10, 20, 30);
    Vector(5.75, 25.5f);
    Vector(10.75f, 15.35f, 2.5f);
    */
    
    // �Լ��� �������̵�
    // ���� Ŭ������ �ִ� �Լ��� ���� Ŭ����(���)���� �������Ͽ� ����ϴ� ����̴�.
    // ���� Ŭ�������� �Լ��� ������ �� �� ���� Ŭ������ �Լ� ���¿� ��ġ�ؾ��Ѵ�.


    Dog * dog = new Dog();
    dog->Sound();

    Animal* animal = new Animal();

    animal->Sound();

    animal = dog;
    // ���� ���ε��� �Ͼ�ٰ� ��
    animal->Sound();


    delete dog;
    

    return 0;
}










