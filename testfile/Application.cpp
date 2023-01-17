#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���

using namespace std;

namespace A
{
	int value = 10;

	void information()
	{
		std::cout << "A �������� ����" << std::endl;

	}
} // <- �� �������� ����� �޸𸮿��� ������� ���� �����̴�.

namespace B
{
	int value = 20;
	void information()
	{
		std::cout << "B �������� ����" << std::endl;

	}

}

// using
/*
// ������ �����ؼ� ����� �� �ִ� ���
// using�� �����ϰ� ���� �����̽��� ��ġ�� �̸��� �ִٸ�
// ��ȣ���� �߻��� ������ ������ �ȴ�.
// ��ġ�� �̸��� ���ٸ� using�� ���� ����� �����ϴ�.
// ���� ���⼺�� ��� �ֱ⿡ �ڵ� �������� �ֻ�ܿ� �ø��� ���� �Ϲ����̴�.

using namespace A;
using namespace std;
*/


// Ŭ������?
// ����� ���� ������ �������� �Ӽ�(����)�� �Լ��� ���ԵǾ� ������,
// Ŭ������ ���� ��ü�� �����Ͽ� �����ϰ� ����� �� �ִ� ����ü�Դϴ�.
// [���� ��� : ���, ���� ������(ĸ��ȭ), ������, �߻�ȭ]

class Monster
{
	// ���� �����ڶ�?
	// Ŭ���� ������ ���ԵǾ� �ִ� �Ӽ��� ���� ������ �����ϴ� �������̴�.
	// �⺻ ���� ������
	// ���� �����ڸ� �������� ������ �⺻������ private ���� �����ڷ� �����ȴ�.

public:
	int health;
	float damage;

	void Attack()
	{
		cout << "�����մϴ�." << endl;
	}

};

int main()
{
	// �̸� ����
	/*
	// �Ӽ��� ������ �� �ֵ��� ��ȿ ������ �����ϴ� �����Դϴ�.
	// ���� �� �̸��� �ߺ��� ���� ���� �����ڳ����� ������ �����ϴ� ��� 

	std::cout << A::value << std::endl;
	A::information();

	std::cout << B::value << std::endl;
	B::information();
	*/

	// Ŭ������ �ν��Ͻ�ȭ
	// �ν��Ͻ�ȭ : ��ü�� ���� �޸𸮿� �ε��ϴ� ���� 

	Monster orc;
	

	orc.health = 100;
	orc.damage = 10;
	orc.Attack();
	
	cout << "��ũ�� ü����" << orc.health << endl;
	cout << "��ũ�� ����" << orc.damage << endl;

	return 0;
}