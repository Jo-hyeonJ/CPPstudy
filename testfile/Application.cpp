#include <iostream>
#include <random>

using namespace std;
#define SIZE 8


int array[8] = { 5,3,1,2,4,7,6,8 };

void MergeSort(int data[], int start, int middle, int end)
{
    // left 변수, right변수, 정렬 시킬 배열의 인덱스를 증가시키는 변수(temp)

    int temp = start;
    int left = start;
    int right = middle + 1;

    while (left <= middle && right <= end)
    {
        if (data[left] <= data[right])
        {
            data[temp++] = data[left++];
        }

        else
        {
            data[temp++] = data[right++];
        }
    }
    if (left > middle)
    {
        for (int x = right; x <= end; x++)
        {
            data[temp++] = data[right++];
        }
    }

    else
    {
        for (int x = left; x <= middle; x++)
        {
            data[temp++] = data[left++];
        }
    }

    for (int i = start; i <= end; i++)
    {
        data[i] = arr[i];
    }

}

void Division(int data[], int left, int right)
{
    if (left < right)
    {
        // middle 변수 선언
        int middle = (left + right) / 2;

        if (0 < middle)
        {
            // 왼쪽 분할 재귀 함수
            Division(data, left, middle);

            // 오른쪽 분할 재귀
            Division(data, middle+1, right);
        }

        MergeSort(arr, left, middle, right);

    }



}


int main()
{
    // 문자열 뒤집기
    /*
    string str = "apple";


    string rstr;

    rstr = str;

    int count = 0;

    // 자리수 구하기
    for (int i = 0; str[i] != NULL; i++)
    {
        count++;
    }

    // 역배열로 집어넣기
    for (int i = 1; i <= count; i++)
    {
        int rcount = count -i;
        rstr[rcount] = str[i-1];
    }

    cout << str << endl;
    cout << rstr << endl;


    for (int i = 0; i < str.length() / 2; i++)
    {
        swap(str[i], str[str.length() - 1 - i]);
    }

    cout << str;

    */

    // 병합 정렬
    // 하나의 리스트를 두 개의 균등한 크기로 분할하고
    // 분할된 부분 리스트를 정렬한 다음, 두 개의 정렬된 부분 리스트를 합하여
    // 전체가 정렬된 리스트가 되도록 정렬하는 알고리즘이다.

    Division(arr, 0, 7);

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << endl;

    }


    return 0;
}
