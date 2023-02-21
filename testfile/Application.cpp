#define _CRT_SECURE_NO_WARNINGS
// 문자열 관련 함수 보안 경고로 인한 컴파일 에러 방지

#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더
#include <climits>


using namespace std;

#define SIZE 5

class Queue
{
 private:
     int front = -1;
     int rear = -1;

 public:
     int buffer[SIZE] = { 0, };

     bool Empty()
     {
         if (front == rear)
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
         if (rear == SIZE - 1)
         {
             return true;
         }
         else
         {
             return false;
         }
     }

     void Enqueue(int data)
     {
         // 큐가 다 차있으면 데이터를 넣을 수 없도록 처리
         if (IsFull() == true)
         {
             cout << "Queue Is Full" << endl;

         }
         else
         {
             buffer[++rear] = data;
         }

     }

     int Dequeue()
     {
         // 큐가 비어있으면 데이터를 뺄 수 없도록 처리
         if (Empty() == true)
         {
             cout << "Queue is Empty" << endl;

         }
         else
         {
             int temp;
             temp = buffer[++front];
             buffer[front] = NULL;

             // 임시 변수 return
             return temp;
            
         }
     }
};

 int main()
 {
     Queue queue;
     
     queue.Enqueue(10);
     queue.Enqueue(20);
     queue.Enqueue(30);
     queue.Enqueue(40);
     queue.Enqueue(50);
     queue.Enqueue(60);

     while (!queue.Empty())
     {
         cout << queue.Dequeue() << endl;


     }

     return 0;
 }

 









