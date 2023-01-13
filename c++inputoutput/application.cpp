#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더


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

	// c++ 입출력 + 범위 지정 연산자
	/*
	// std::cout로 출력 가능하다. 별도의 데이터 유형 선언은 필요 없다.

	//불리언 연산자. 참과 거짓의 값을 가진다.
	bool condition = true; //1byte 메모리를 가진다.
	int value = 100;
	char blood = 'A';
	float pi = 3.14;

	// 입력 연산자 std::cin
	//
	// >> 추출 연산자
	// 버퍼 안에 있는 내용을 저장시킬 수 있는 연산자이다.
	//		 ↓방향 다름(추출 연산자)
	// std::cin >> value;

	// 범위 지정 연산자 (::)
	// 여러 범위에서 사용되는 식별자를 구분하는데 사용하는 연산자이다.
	char alphabet = 'A';

	std::cout << "지역 변수 alphabet의 값 : " << alphabet << std::endl;
	std::cout << "전역 변수 alphabet의 값 : " << ::alphabet << std::endl;
	//									      ↑ 문자열과 문자를 동시에 출력하는 법

	if (condition) //(condition == true) 불리언 값 자체가 0,1
	{
		// << (삽입 연산자)
		// 입력된 데이터는 출력 장치로 전달하며 "<<" 연산자를 사용하여
		// 자신이 참조한 값을 반환하는 연산자입니다.

		std::cout << "안녕하세요." << std::endl; // std::endl = 개행문자
		std::cout << value << std::endl;
		std::cout << blood << std::endl;
		std::cout << pi << std::endl;



	}
	*/

	// 문자열
	/*
	std::string name = "Leesin";

	std::cout << "name의 값 : " << name << std::endl;
	*/

	// 예제
	// c++에선 struct 선언하지 않아도 된다.

	Player player;
	player.x = 0;
	player.y = 0;

	Monster monster = { 4,4 };

	int tempX = player.x - monster.x;
	int tempY = player.y - monster.y;

	float position = sqrt((tempX * tempX) + (tempY * tempY));

	std::cout << "플레이어와 몬스터의 거리는 " << position << std::endl;


	if (position > 5)
	{
		std::cout << "몬스터는 수비 상태입니다." << std::endl;
	}
	else if (position >= 0 && position <= 5)
	{
		std::cout << "몬스터는 공격 상태입니다." << std::endl;
	}

	// 루트 sqrt(x)

	std::cout << sqrt(49) << std::endl;

	// 거듭 제곱
	std::cout << pow(10, 2) << std::endl; // 10의 2제곱



	return 0;
}