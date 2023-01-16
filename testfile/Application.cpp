#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더

int main()
{
	// 범위 기반 반복문
	/*
	// 시작과 끝을 알려주지 않아도 처음부터 끝까지 순회하는 반복문이다.
	// for([자료형] [변수명] : [리스트이름])
	int data[5] = { 10,20,30,40,50 };

	
	for (auto x : data) //x에 리스트의 값을 담는 식
		// for (auto& x : data) 참조형 연산자로 리스트에 접근이 가능하다.
		// (const auto)리스트 값이 바뀔 경우를 대비해 자료형에 const형을 추가할 수 있다.
	{
		// 범위 기반 반복문은 인덱스에 접근이 불가능하다 (전체를 불러와야함)
		x = 1;

		std::cout << x << std::endl;

	}

	for (int i = 0; i < 5; i++) //리스트 값이 바뀌는지 확인하는 반복문
	{
		std::cout << data[i] << std::endl;

	}

	*/


	//					+댕글링 포인터 : 이미 해제된 메모리				해제가 됐는데 값을 대입하는 식으로 짤 가능성이 있음
	// 동적 할당		(여기 값을 넣으면 오류 발생할 가능성이 있음) -> 해제된 메모리를 참조하던 ptr에 nullptr값을 넣는 걸로 해결한다.
	// new(메모리 할당), delete(메모리 해제)
	// = malloc				=free

	int* ptr = new int;

	*ptr = 100;

	std::cout << "ptr이 가르키는 값 : " << *ptr << "\n";
	std::cout << "ptr의 값 : " << ptr << std::endl;

	delete ptr;

	*ptr = 100;

	return 0;
}