#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���

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
        cout << "�⺻ ������ ȣ��" << endl;
    }

    // ���� ������
    IPhone(const IPhone& copyIPhone) // �б� �������� ���� ����
    {
        // ���� �����?
        // ��ü�� ������ ��, ���� ���� �ƴ� �ν��Ͻ� ��ü�� ���� �����Ͽ�
        // ���� �ٸ� �޸𸮸� �����ϴ� �����̴�.

        size = copyIPhone.size;
        price = copyIPhone.price;

        version = new int; // ���� �޸𸮷� �޾��ش�. ���� �ٸ� �޸𸮸� ������ ��.
        *version = *copyIPhone.version;

        cout << "���� ������ ȣ��" << endl;

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
    // ���� �����ڶ�?
    /*
    // ���� ��ü�� �����Ͽ� ������ų �� ȣ��Ǵ� �������Դϴ�.
    IPhone se1;

    se1.price = 100000;
    se1.size = 5;

    IPhone se2 = se1;
    */

    // ���� ����
    /*
    // ��ü�� ������ �� �ּڰ��� �����Ͽ� ���� �޸𸮸� ����Ű�� �����̴�.
    // -> ���� ���� ������ ���ϰ� �޸� ������ ���� �߻� ���ɼ� ����

    int* ptr1 = new int;
    *ptr1 = 10000;

    int* ptr2 = ptr1;
    *ptr2 = 3000;

    cout << "ptr1�� �� : " << *ptr1 << endl;
    cout << "ptr2�� �� : " << *ptr2 << endl;

    delete ptr1;
    // delete ptr2; �̹� ������ �޸𸮸� �����Ϸ� �õ��� �� (���� �߻�)
    */

    IPhone se1;

    *se1.version = 10;
    se1.price = 100000;
    se1.size = 5;

    IPhone se2 = se1;
    *se2.version = 20;

    cout << "*se1.version�� �� : " << *se1.version << endl;
    cout << "*se2.version�� �� : " << *se2.version << endl;

    // ���� �����?
    // ��ü�� ������ ��, ���� ���� �ƴ� �ν��Ͻ� ��ü�� ���� �����Ͽ�
    // ���� �ٸ� �޸𸮸� �����ϴ� �����̴�.



    return 0;
}