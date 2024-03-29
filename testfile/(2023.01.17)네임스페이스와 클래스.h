#pragma once
#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더

using namespace std;

namespace A
{
	int value = 10;

	void information()
	{
		std::cout << "A 개발자의 영역" << std::endl;

	}
} // <- 이 영역에서 벗어나면 메모리에서 사라지는 지역 변수이다.

namespace B
{
	int value = 20;
	void information()
	{
		std::cout << "B 개발자의 영역" << std::endl;

	}

}

// using
/*
// 범위를 생략해서 사용할 수 있는 기능
// using을 남발하고 네임 스페이스의 겹치는 이름이 있다면
// 모호성이 발생해 오류의 원인이 된다.
// 겹치는 이름이 없다면 using의 복수 사용이 가능하다.
// 절차 지향성을 띄고 있기에 코드 페이지에 최상단에 올리는 것이 일반적이다.

using namespace A;
using namespace std;
*/


// 클래스란?
// 사용자 정의 데이터 유형으로 속성(변수)과 함수가 포함되어 있으며,
// 클래스를 통해 객체를 생성하여 접근하고 사용할 수 있는 집합체입니다.
// [관련 용어 : 상속, 접근 지정자(캡슐화), 다형성, 추상화]

class Monster
{
	// 접근 지정자란? [public, private, protected]
	// 클래스 내부의 포함되어 있는 속성에 접근 범위를 제한하는 지정자이다.
	// 기본 접근 지정자
	// 접근 지정자를 설정하지 않으면 기본적으로 private 접근 지정자로 설정된다.
	// private는 외부에서 속성에 대한 접근이 제한되며 내부에서만 수정이 가능하다.

public: // 외부에서도 접근이 가능하게 해준다.
	int health;
	float damage;

	void Attack()
	{
		cout << "공격합니다." << endl;
	}


protected: // 클래스 내부와 자기가 상속하고 있는 클래스에서만
	// 접근할 수 있도록 설정하는 제한자이다.
	string name;



};

// 클래스에 상속된 클래스를 생성 후 protected에 있는 속성을 편집한다.
class Goblin : public Monster
{
	void Information()
	{
		name = "Goblin";
		Attack();
	}
};



int main()
{
	// 이름 공간
	/*
	// 속성을 구분할 수 있도록 유효 범위를 설정하는 영역입니다.
	// 협업 중 이름의 중복을 막기 위해 개발자끼리의 영역을 설정하는 기능

	std::cout << A::value << std::endl;
	A::information();

	std::cout << B::value << std::endl;
	B::information();
	*/

	// 클래스의 인스턴스화
	// 인스턴스화 : 객체를 스택 메모리에 로드하는 과정 

	Monster orc;
	// (지금은 문제 없어보임)		 ↓기본 생성자가 포함 되어서 함수 호출 연산자를 사용
	Monster* dragon = new Monster(); // 동적 할당
	dragon->Attack();

	Goblin object;

	delete dragon;

	int* ptr = new int[3];

	ptr[0] = 10;
	ptr[1] = 20;
	ptr[2] = 30;

	delete[] ptr; // 배열 형태의 동적 메모리 해제 방법

	orc.health = 100;
	orc.damage = 10;
	orc.Attack();



	cout << "오크의 체력은 " << orc.health << endl;
	cout << "오크의 힘은 " << orc.damage << endl;



	return 0;
}