#define _CRT_SECURE_NO_WARNINGS
// ���ڿ� ���� �Լ� ���� ���� ���� ������ ���� ����

#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���
#include <climits>


using namespace std;


 int main()
 {
     // ���� ����

     int array[5] = {3,5,1,7,11};

     int key = 0;
     int j = 0;

     for (int i = 1; i < 5; i++)
     {
         key = array[i];

         for (j = i - 1; j >= 0 && array[j] > key; j--)
         {

             array[j + 1] = array[j];
         }
         array[j + 1] = key;
     }

     for (const int &element : array)
     {
         cout << element << endl;
     }


     return 0;
 }

 









