#define _CRT_SECURE_NO_WARNINGS
// 문자열 관련 함수 보안 경고로 인한 컴파일 에러 방지

#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더
#include <climits>


using namespace std;

#define SIZE 5

class Stack
{
private:
    int top = - 1;
    int buffer[SIZE] = { 0, };
    

public:
    
    bool Empty()
    {
         if(top == -1)
         {
           return true;
         }
         else
         {
           return false;
         }

    }

    bool IsFull()
    {
        if (top == SIZE - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
 
    }

    void Push(int data)
    {
        if (IsFull() == true)
        {
            cout << "Stack is Full" << endl;
        }
        else
        {
            buffer[++top] = data;
        }


    }

    int Pop()
    {
        if (Empty() == true)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            return buffer[top--];
        }
       
    }
};

 int main()
 {
     Stack stack;

     stack.Push(10);
     stack.Push(20);
     stack.Push(30);
     stack.Push(40);
     stack.Push(50);
     stack.Push(60);

     while (!stack.Empty())
     {
         cout << stack.Pop() << endl;
     }



     return 0;
 }

 









