#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���


char alphabet = 'B';

struct Player
{
	int x;
	int y;
};

struct Monster
{
	int x;
	int y;
};

int main()
{

	// c++ ����� + ���� ���� ������
	/*
	// std::cout�� ��� �����ϴ�. ������ ������ ���� ������ �ʿ� ����.

	//�Ҹ��� ������. ���� ������ ���� ������.
	bool condition = true; //1byte �޸𸮸� ������.
	int value = 100;
	char blood = 'A';
	float pi = 3.14;

	// �Է� ������ std::cin
	//
	// >> ���� ������
	// ���� �ȿ� �ִ� ������ �����ų �� �ִ� �������̴�.
	//		 ����� �ٸ�(���� ������)
	// std::cin >> value;

	// ���� ���� ������ (::)
	// ���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ� ����ϴ� �������̴�.
	char alphabet = 'A';

	std::cout << "���� ���� alphabet�� �� : " << alphabet << std::endl;
	std::cout << "���� ���� alphabet�� �� : " << ::alphabet << std::endl;
	//									      �� ���ڿ��� ���ڸ� ���ÿ� ����ϴ� ��

	if (condition) //(condition == true) �Ҹ��� �� ��ü�� 0,1
	{
		// << (���� ������)
		// �Էµ� �����ʹ� ��� ��ġ�� �����ϸ� "<<" �����ڸ� ����Ͽ�
		// �ڽ��� ������ ���� ��ȯ�ϴ� �������Դϴ�.

		std::cout << "�ȳ��ϼ���." << std::endl; // std::endl = ���๮��
		std::cout << value << std::endl;
		std::cout << blood << std::endl;
		std::cout << pi << std::endl;



	}
	*/

	// ���ڿ�
	/*
	std::string name = "Leesin";

	std::cout << "name�� �� : " << name << std::endl;
	*/

	// ����
	// c++���� struct �������� �ʾƵ� �ȴ�.

	Player player;
	player.x = 0;
	player.y = 0;

	Monster monster = { 4,4 };

	int tempX = player.x - monster.x;
	int tempY = player.y - monster.y;

	float position = sqrt((tempX * tempX) + (tempY * tempY));

	std::cout << "�÷��̾�� ������ �Ÿ��� " << position << std::endl;


	if (position > 5)
	{
		std::cout << "���ʹ� ���� �����Դϴ�." << std::endl;
	}
	else if (position >= 0 && position <= 5)
	{
		std::cout << "���ʹ� ���� �����Դϴ�." << std::endl;
	}

	// ��Ʈ sqrt(x)

	std::cout << sqrt(49) << std::endl;

	// �ŵ� ����
	std::cout << pow(10, 2) << std::endl; // 10�� 2����



	return 0;
}