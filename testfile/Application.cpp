#define _CRT_SECURE_NO_WARNINGS
// ���ڿ� ���� �Լ� ���� ���� ���� ������ ���� ����

#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���
#include <climits>


using namespace std;

#define SIZE 5

class Queue
{
 private:
     int front = SIZE;
     int rear = SIZE;

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
         if ((rear)%SIZE == front)
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
         // ť�� �� �������� �����͸� ���� �� ������ ó��
         if (IsFull() == true)
         {
             cout << "CircleQueue Is Full" << endl;

         }
         else
         {
             buffer[(rear)%SIZE] = data;
             rear = (rear) % SIZE;
             
         }

     }

     int Dequeue()
     {
         // ť�� ��������� �����͸� �� �� ������ ó��
         if (Empty() == true)
         {
             cout << "CircleQueue is Empty" << endl;

         }
         else
         {
             int temp;
             temp = buffer[(front)%SIZE];
             buffer[(front)%SIZE] = NULL;
             front = (front) % SIZE;

             // �ӽ� ���� return
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
     

     while (!queue.Empty())
     {
         cout << queue.Dequeue() << endl;
     }
     queue.Enqueue(10);
     queue.Enqueue(20);
     queue.Enqueue(30);
     queue.Enqueue(40);
     queue.Enqueue(50);



     while (!queue.Empty())
     {
         cout << queue.Dequeue() << endl;


     }
     queue.Enqueue(10);
     queue.Enqueue(20);
     queue.Enqueue(30);
     queue.Enqueue(40);
     queue.Enqueue(50);



     while (!queue.Empty())
     {
         cout << queue.Dequeue() << endl;


     }

     return 0;
 }

 









