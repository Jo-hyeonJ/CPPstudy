#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���

using namespace std;

class Monster
{
public:
    int health;
    static int count;

    // this ������
    // �ڱ� �ڽ��� ����Ű�� ������ (�ڽ��� �ּҰ��� ������.) = ��� ���̶� ���� �Ұ�

    Monster(int health)
    {
        this -> health = health;

    }

    void Tracking()
    {
        cout << this << "�� ȣ���߽��ϴ�." << endl;
        cout << "���� ����" << endl;
    }

    ~Monster()
    {
        count++;
        cout << "���͸� óġ�� Ƚ�� : " << count << endl;
    }
};

// static ��� ������ ��� ��ü���� �����ؾ� �ϹǷ� ���α׷� ���ۺ��� ������ ����
// �Ǿ�� �ϱ⿡ ���� ���������� ������ �� �ִ�.
int Monster::count = 0;

class KeyBoard
{
public:
    bool power;

    void Typing()
    {
        cout << "Ű���� �Է�" << endl;
    }
};

class Mouse
{
public:
    bool power;

    void Drag()
    {
        cout << "���콺 �巡��" << endl;
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
    // ���� ����
    /*
    // static : ���� ������ ���� ������ Ư¡�� ��� ���� ����
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

    // ���� ���
    // ������ ���� Ŭ�������� ����� �޴� ���
    // ���� ���� ���� Ŭ������ �ߺ� �Ǵ� �Ӽ��� ���� �� �� �ֱ� ������
    // �������������ڷ� Ư������ �ο��Ѵ�.

    Computer computer;
    computer.use();
    computer.::Mouse::power = true; //�θ� �� �� ���� ��Ҵ� ��ȣ���� �߻���
    // Ư������ ������ ���� ���� ����������(::)�� ���� ���� Ŭ������ �̸��� �����ϰ�
    // �Ӽ��� �̿� �� �� �ִ�.

    return 0;
}