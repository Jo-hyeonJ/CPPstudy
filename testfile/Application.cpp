#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더
#include <memory>

using namespace std;

class Player
{
public:

    weak_ptr<Player> wPtr;


    int health;
    
    Player()
    {
        cout << "플레이어 생성" << endl;
    }


    ~Player()
    {
        //cout << health << endl;
        cout << "플레이어 소멸" << endl;
    }

};

int main()
{
    // 스마트 포인터 [메모리 누수를 막는 포인터]
    // 포인터처럼 동작하는 클래스 템플릿으로 사용이 끝난 메모리를
    // 자동으로 해제하는 포인터이다.
    // 포인터 함수가 스택 영역에서 제거 될 때 할당된 힙의 메모리도 같이 해제한다.
    // 1. 유니크 포인터 2. 쉐어드 포인터 3. 위크 포인터
    
    // 유니크 포인터(unique_ptr)
    /*
    #pragma region 유니크 포인터(unique_ptr)

    // 하나의 유니크 포인터가 하나의 메모리 소유권만 가질 수 있는 포인터
    // 유니크 포인터끼리의 얕은 복사가 이뤄지지 않게 제한된다.

    // C++식 표기법 [int = 10] = [int(10)]
    // unique_ptr<int> uPtr(new int(10));

    // = int * uPtr = new int(10);

    // unique_ptr<int> uPtr1 = uPtr; 
    // 다른 유니크 포인터가 할당 받은 메모리는 할당 받을 수 없음

    unique_ptr<Player> uPtr(new Player);
    uPtr->health = 100;
    // move 함수를 이용하여 소유권을 이전 시킬 수 있다.
    unique_ptr<Player> uPtr1 = std::move(uPtr);
#pragma endregion;
*/


    // 쉐어드 포인터(shared_ptr)
    /*
    // [어떤 하나의 객체를 참조하는 스마트 포인터의 갯수]를 참조하는 포인터이다.
    // →참조 카운트를 참조하는 포인터
    // 참조 카운트가 0이 되면 스스로 메모리를 해제한다.

    // 참조 카운트(Reference Counting)
    // 해당 메모리를 참조하는 포인터가 몇개가 있는 지 나타내는 값이다.

    // 서로가 서로를 참조하는 순환 참조 발생 시, 해제 되지 않아
    // 스마트 포인터로써 기능을 잃는다. 이는 weak 포인터 사용으로 해결한다.

    // 첫 번째 초기화 방법
    // shared_ptr<int> sPtr(new int(5));

    // 두 번째 초기화 방법
    // shared_ptr<int> sPtr1 = make_shared<int>(5);

    shared_ptr<Player> ptr1(new Player);

    {
        shared_ptr<Player> ptr2 = ptr1;
        cout << "ptr2의 참조 카운트 : " << ptr2.use_count() << endl;
    }
    cout << "ptr1의 참조 카운트 : " << ptr1.use_count() << endl;
    */

    // 위크 포인터 (weak_ptr)
    /*
    // 하나 이상의 쉐어드 포인터 인스턴스가 소유하는 객체에 대한 접근을 제공하지만,
    // 참조 카운트에 포함 되지 않는 스마트 포인터이다.

    // weak_ptr<Player> wPtr;

    shared_ptr<Player> player1(new Player);
    shared_ptr<Player> player2(new Player);

    cout << "player1" << player1.use_count() << endl;
    cout << "player2" << player1.use_count() << endl;

    player1->wPtr = player2;
    player2->wPtr = player1;

    // 순환 참조 중인 메모리들도 해제가 가능하다.
    */

    return 0;
}










