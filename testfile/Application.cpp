#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더
#include "Computer.h"

using namespace std;

class Character
{
    // 생성자란?
    // 클래스의 인스턴스가 생성되는 시점에 자동으로 호출되는 특수한 멤버 함수이다.
    // 객체 생성시의 알람 역할

private :
    int x;
    int y;

public : // 생성자의 경우 객체가 생성될 때 단 한번만 호출되며, 별도의 반환형이 없다.
    Character(int m_x, int m_y) // 생성자는 별도의 함수가 아닌 클래스의 이름과 동일하게 정의된다.
    // 매개 변수를 설정해놓을 수 있으며 클래스 불러오기 시 변수를 입력해주어야한다. 
    
    {
        x = m_x;
        y = m_y;

        cout << "x : " << x << " y : " << y << endl;

    }

    // 소멸자
    // 객체가 소멸될 때 자동으로 실행되는 클래스의 멤버 함수이다.
    // 메모리의 할당 해제를 의미하며 코드 종결 시에도 작동한다.
    ~Character() // "~"+"클래스 이름"으로 정의 가능하다.
    {
        cout << "Character가 파괴 되었습니다." << endl;

    }

    // const 함수
    // 함수 내부에서 값을 변경하지 못하도록 상수화하는 함수이다.
    // 읽기 전용으로 만드는 안전장치
    void Talk() const
    {
        // x = 100; <-에러 
        cout << "대화 진행" << endl;

    }


};

int main()
{
    //생성자와 소멸자
    /*
    // Character character;

    // character.Talk();

    Character* champion = new Character(1,1); // 생성자에 설정된 매개 변수 삽입

    delete champion;

   // cout << "character의 크기 : " << sizeof(character) << endl;
   */

    // 클래스의 선언과 정의
    /*
    // 보편적으로 클래스를 사용 할 땐 선언과 정의 부분으로 나눈다.
    // 선언 : 변수와 함수 명명과 초기화를 담당한다. [헤더 파일로 저장]
    // 정의 : 선언한 요소들에 값과 세부 내용을 작성한다. [cpp로 저장]
    // 클래스 파일 참조

    Computer samsung;
    samsung.Power();
    */


    return 0;
}