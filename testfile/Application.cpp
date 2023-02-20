#define _CRT_SECURE_NO_WARNINGS
// ���ڿ� ���� �Լ� ���� ���� ���� ������ ���� ����

#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���
#include <climits>


using namespace std;

class Person
{
public:
    const char* name;
    char nickName[20];
    // = char * const nickName[20]
};


int main()
{
    Person person;

    // ���ڿ� �����Լ�
    /*
    // ��� ���� ������
    // �����͸� �������Ͽ� ���� ���� �� �� ����.
    person.name = "Kim";
    // ������ �ٸ� �ּڰ��� ���� �� �ִ�.
    // rodata������ ���ο� ���ڿ��� �ּҸ� �����޴� ��
    person.name = "Lee";

    // ������ ���
    // ������ ����� ���ο� �ּҰ��� ���� ���ϱ⿡ ���ڿ� ������ �Ұ����ϴ�.
    // person.nickName = "FAKER";
    // person.nickName[1] = "F";

    // 8 byte
    // [F][A][K][E][R][\0]
    char temp[20] = "FAKER";

    // �迭�� �̸��� �迭�� ���� �ּҸ� �ǹ��Ѵ�.
    

    // strcpy [���ڿ� ���� �Լ�]
    // ù ��° �Ű����� : ���� ���� ���� �迭
    // �� ��° �Ű����� : ���� �� ���� �迭
    strcpy(person.nickName, temp);
    // ������ ���� �Ұ����ϴ� ��Ȳ������ ��� ����

    cout << person.nickName << endl;
    */

    // ���� ���� �˰���
    // �־��� ����Ʈ �߿��� �ּڰ��� ã�� ���� �� ���� ������ ���� ��ü�ϴ� ����
    
    // �ð� ���⵵ O(n��)

    int array[5] = { 15,3,11,1,4 };
    int min= INT_MAX;

    // �� ���
    for (int c = 0; c <= 4; c++)
    {
        for (int i = c; i < 5; i++)
        {
            if (min > array[i])
            {
                min = array[i];
            }
        }

        for (int a = 0; a < 5; a++)
        {
            if (min == array[a])
            {
                swap(array[c], array[a]);
            }
        }

        min = INT_MAX;
    }

    // ��� ���
    for (int i = 0; i < 5; i++)
    {
        int minIndex = i;
        for (int j = i; j < 5; j++)
        {
            if (array[minIndex] > array[j])
            {
                minIndex = j;
            }
        }
        swap(array[minIndex], array[i]);

    }


    for (const int & element : array)
    {
        cout << element << endl;
    }

    return 0;
}











