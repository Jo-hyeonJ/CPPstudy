#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더
#include <list>
#include <stack>
#include <queue>

using namespace std;

// 템플릿 
// 데이터 형식에 의존하지 않고, 하나의 값이 여러 다른 데이터 타입
// 들을 가질 수 있는 기술에 중점을 두어 재사용성을 높일 수 있는
// 프로그래밍 방법입니다.

template <typename T>
void Calculator(T x, T y)
{
    cout << "x + y = " << x + y << endl;
}

// 템플릿의 특수화
// 템플릿 함수를 사용하지만, 특정 매개변수에 대해서
// 별도의 처리를 하고 싶을 때 사용하는 기능입니다.
template<>
void Calculator(const char* x, const char* y)
{
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}

template <typename T>
class DataStruct
{
private:
    T data;

public:
    void Push(T x)
    {
        cout << x << "의 값이 들어왔습니다." << endl;
    }
};

void DataTable(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "array[" << i << "] = " << array[i] << endl;

    }
}


int main()
{
    // 템플릿
    /*
    //Calculator(10, 20);
    //Calculator(5.6, 7.12);
    //Calculator('A', 'B');
    // 
    //Calculator("count", "Down");

    DataStruct<char> charStruct;
    charStruct.Push('A');
    charStruct.Push('B');
    charStruct.Push('C');
    charStruct.Push('D');
    */

    // 스택
    /*
    stack<int> intStack;

    // push() : 스택에 데이터를 저장하는 함수
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);

    // size() : 현재 스택의 크기를 반환하는 함수
    cout << intStack.size() << endl;

    // pop() : 스택에 데이터를 제거하는 함수
    intStack.pop();

    // top() : 스택에 가장 위에 있는 데이터를 반환하는 함수
    cout << intStack.top() << endl;

    //empty() : 스택에 데이터가 비어있는지 확인하는 함수
    cout << intStack.empty() <<endl;
    
    stack<int> aStack;

    aStack.push(1);
    aStack.push(2);
    aStack.push(3);
    aStack.push(4);
    aStack.push(5);

    while (aStack.empty() != 1)
    {
        cout << aStack.top() << endl;
        aStack.pop();
    }
    */

    // 큐
    /*
    queue<int> intQueue;

    intQueue.push(1);
    intQueue.push(2);
    intQueue.push(3);
    intQueue.push(4);
    intQueue.push(5);

    while(intQueue.empty() != 1)
    {
        cout << intQueue.front() << endl;
        intQueue.pop();
    }

    */
    
    int room[5] = { 1,2,3,4,5 };
    DataTable(room, 5);

    return 0;
}










