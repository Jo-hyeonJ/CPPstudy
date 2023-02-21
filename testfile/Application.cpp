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
         // ť�� �� �������� �����͸� ���� �� ������ ó��
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
         // ť�� ��������� �����͸� �� �� ������ ó��
         if (Empty() == true)
         {
             cout << "Queue is Empty" << endl;

         }
         else
         {
             int temp;
             temp = buffer[++front];
             buffer[front] = NULL;

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
     queue.Enqueue(60);

     while (!queue.Empty())
     {
         cout << queue.Dequeue() << endl;


     }

     return 0;
 }

 









