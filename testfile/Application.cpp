#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더


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
	// & (C++) 참조 연산자
	/*
	
	// 포인터의 이름이나 주소 앞에 사용하여 포인터가 가르키는
	// 주소에 저장된 값을 반환하는 연산자이다.

	int value = 100; // 4바이트 크기의 변수 생성
	int& ref = value; // 참조형 변수 생성 (다른 이름의 같은 메모리)
	// 선언과 동시에 초기화가 되어야함. 이후 다른 변수를 참조하는 것은 불가능하다.
	int value2 = 200;

	std::cout << &ref << std::endl;
	std::cout << &value << std::endl;
	std::cout << ref << std::endl;

	ref = value2;

	std::cout << &ref << std::endl;
	std::cout << ref << std::endl;
	*/

	
	//포인터와 참조자의 차이점
	/*
	
	[포인터로 참조에 의한 호출]
	int Function(int * x) -> *x의 메모리 할당 및 복사 비용 발생
	{
		*x = 1000; -> 번거로운 * 사용
	}

	Funtion(&value); -> 호출할 때도 &사용

	-------------------------------------------

	[참조자를 매개 변수로]
	int Function(int& x) -> 참조 변수는 메모리 할당을 받지 않음
	{
		x = 1000; -> 역참조 사용 할 필요 없음.
	}
	Funtion(value); -> 주소 참조 필요 없음.

	-------------------------------------------

	 함수로 호출한다는 상황에서 매개 변수로 *x로 두고 참조에 의한 호출을 한다면
	 x의 주소값을 저장할 *x의 복사 비용이 발생한다. 하지만 참조 변수를 사용한다면
	 번거롭게 & 사용할 필요도 복사 비용도 발생하지 않는다.

	*/

	int data = 10;

	PointerFunction(&data);
	
	std::cout << "data의 값 : " << data << std::endl;

	ReferenceFunction(data);

	std::cout << "data의 값 : " << data << std::endl;

	return 0;

}