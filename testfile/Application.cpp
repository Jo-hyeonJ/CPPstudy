#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���
#include <memory>

using namespace std;

class Player
{
public:

    weak_ptr<Player> wPtr;


    int health;
    
    Player()
    {
        cout << "�÷��̾� ����" << endl;
    }


    ~Player()
    {
        //cout << health << endl;
        cout << "�÷��̾� �Ҹ�" << endl;
    }

};

int main()
{
    // ����Ʈ ������ [�޸� ������ ���� ������]
    // ������ó�� �����ϴ� Ŭ���� ���ø����� ����� ���� �޸𸮸�
    // �ڵ����� �����ϴ� �������̴�.
    // ������ �Լ��� ���� �������� ���� �� �� �Ҵ�� ���� �޸𸮵� ���� �����Ѵ�.
    // 1. ����ũ ������ 2. ����� ������ 3. ��ũ ������
    
    // ����ũ ������(unique_ptr)
    /*
    #pragma region ����ũ ������(unique_ptr)

    // �ϳ��� ����ũ �����Ͱ� �ϳ��� �޸� �����Ǹ� ���� �� �ִ� ������
    // ����ũ �����ͳ����� ���� ���簡 �̷����� �ʰ� ���ѵȴ�.

    // C++�� ǥ��� [int = 10] = [int(10)]
    // unique_ptr<int> uPtr(new int(10));

    // = int * uPtr = new int(10);

    // unique_ptr<int> uPtr1 = uPtr; 
    // �ٸ� ����ũ �����Ͱ� �Ҵ� ���� �޸𸮴� �Ҵ� ���� �� ����

    unique_ptr<Player> uPtr(new Player);
    uPtr->health = 100;
    // move �Լ��� �̿��Ͽ� �������� ���� ��ų �� �ִ�.
    unique_ptr<Player> uPtr1 = std::move(uPtr);
#pragma endregion;
*/


    // ����� ������(shared_ptr)
    /*
    // [� �ϳ��� ��ü�� �����ϴ� ����Ʈ �������� ����]�� �����ϴ� �������̴�.
    // ������ ī��Ʈ�� �����ϴ� ������
    // ���� ī��Ʈ�� 0�� �Ǹ� ������ �޸𸮸� �����Ѵ�.

    // ���� ī��Ʈ(Reference Counting)
    // �ش� �޸𸮸� �����ϴ� �����Ͱ� ��� �ִ� �� ��Ÿ���� ���̴�.

    // ���ΰ� ���θ� �����ϴ� ��ȯ ���� �߻� ��, ���� ���� �ʾ�
    // ����Ʈ �����ͷν� ����� �Ҵ´�. �̴� weak ������ ������� �ذ��Ѵ�.

    // ù ��° �ʱ�ȭ ���
    // shared_ptr<int> sPtr(new int(5));

    // �� ��° �ʱ�ȭ ���
    // shared_ptr<int> sPtr1 = make_shared<int>(5);

    shared_ptr<Player> ptr1(new Player);

    {
        shared_ptr<Player> ptr2 = ptr1;
        cout << "ptr2�� ���� ī��Ʈ : " << ptr2.use_count() << endl;
    }
    cout << "ptr1�� ���� ī��Ʈ : " << ptr1.use_count() << endl;
    */

    // ��ũ ������ (weak_ptr)
    /*
    // �ϳ� �̻��� ����� ������ �ν��Ͻ��� �����ϴ� ��ü�� ���� ������ ����������,
    // ���� ī��Ʈ�� ���� ���� �ʴ� ����Ʈ �������̴�.

    // weak_ptr<Player> wPtr;

    shared_ptr<Player> player1(new Player);
    shared_ptr<Player> player2(new Player);

    cout << "player1" << player1.use_count() << endl;
    cout << "player2" << player1.use_count() << endl;

    player1->wPtr = player2;
    player2->wPtr = player1;

    // ��ȯ ���� ���� �޸𸮵鵵 ������ �����ϴ�.
    */

    return 0;
}










