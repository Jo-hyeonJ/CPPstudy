#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���


void PointerFunction(int* x)
{
	*x = 1000;
}

void ReferenceFunction(int& x)
{
	x = 100;
}

int main()
{
	// & (C++) ���� ������
	/*
	
	// �������� �̸��̳� �ּ� �տ� ����Ͽ� �����Ͱ� ����Ű��
	// �ּҿ� ����� ���� ��ȯ�ϴ� �������̴�.

	int value = 100; // 4����Ʈ ũ���� ���� ����
	int& ref = value; // ������ ���� ���� (�ٸ� �̸��� ���� �޸�)
	// ����� ���ÿ� �ʱ�ȭ�� �Ǿ����. ���� �ٸ� ������ �����ϴ� ���� �Ұ����ϴ�.
	int value2 = 200;

	std::cout << &ref << std::endl;
	std::cout << &value << std::endl;
	std::cout << ref << std::endl;

	ref = value2;

	std::cout << &ref << std::endl;
	std::cout << ref << std::endl;
	*/

	
	//�����Ϳ� �������� ������
	/*
	
	[�����ͷ� ������ ���� ȣ��]
	int Function(int * x) -> *x�� �޸� �Ҵ� �� ���� ��� �߻�
	{
		*x = 1000; -> ���ŷο� * ���
	}

	Funtion(&value); -> ȣ���� ���� &���

	-------------------------------------------

	[�����ڸ� �Ű� ������]
	int Function(int& x) -> ���� ������ �޸� �Ҵ��� ���� ����
	{
		x = 1000; -> ������ ��� �� �ʿ� ����.
	}
	Funtion(value); -> �ּ� ���� �ʿ� ����.

	-------------------------------------------

	 �Լ��� ȣ���Ѵٴ� ��Ȳ���� �Ű� ������ *x�� �ΰ� ������ ���� ȣ���� �Ѵٸ�
	 x�� �ּҰ��� ������ *x�� ���� ����� �߻��Ѵ�. ������ ���� ������ ����Ѵٸ�
	 ���ŷӰ� & ����� �ʿ䵵 ���� ��뵵 �߻����� �ʴ´�.

	*/

	int data = 10;

	PointerFunction(&data);
	
	std::cout << "data�� �� : " << data << std::endl;

	ReferenceFunction(data);

	std::cout << "data�� �� : " << data << std::endl;

	return 0;

}