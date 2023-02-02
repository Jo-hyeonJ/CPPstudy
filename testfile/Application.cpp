#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���
#include <list>
#include <stack>
#include <queue>

using namespace std;

// ���ø� 
// ������ ���Ŀ� �������� �ʰ�, �ϳ��� ���� ���� �ٸ� ������ Ÿ��
// ���� ���� �� �ִ� ����� ������ �ξ� ���뼺�� ���� �� �ִ�
// ���α׷��� ����Դϴ�.

template <typename T>
void Calculator(T x, T y)
{
    cout << "x + y = " << x + y << endl;
}

// ���ø��� Ư��ȭ
// ���ø� �Լ��� ���������, Ư�� �Ű������� ���ؼ�
// ������ ó���� �ϰ� ���� �� ����ϴ� ����Դϴ�.
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
        cout << x << "�� ���� ���Խ��ϴ�." << endl;
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
    // ���ø�
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

    // ����
    /*
    stack<int> intStack;

    // push() : ���ÿ� �����͸� �����ϴ� �Լ�
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);

    // size() : ���� ������ ũ�⸦ ��ȯ�ϴ� �Լ�
    cout << intStack.size() << endl;

    // pop() : ���ÿ� �����͸� �����ϴ� �Լ�
    intStack.pop();

    // top() : ���ÿ� ���� ���� �ִ� �����͸� ��ȯ�ϴ� �Լ�
    cout << intStack.top() << endl;

    //empty() : ���ÿ� �����Ͱ� ����ִ��� Ȯ���ϴ� �Լ�
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

    // ť
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










