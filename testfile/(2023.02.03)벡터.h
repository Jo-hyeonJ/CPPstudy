#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더
#include <vector>
#include <random>
#include <conio.h>

using namespace std;

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

int main()
{
    // [컨트롤 + H] 전체 대체

    // 벡터
    /*
    // 동적으로 연속적인 메모리를 할당하고 실행 시간에
    // 메모리 크기를 변동 할 수 있는 컨테이너이다.
    // 1.배열과 다르게 동적 메모리를 할당 받기에 힙 영역에 메모리를 할당 받는다.
    // 2.메모리 크기가 변동 되면 기존 주소를 할당 해제하고 새로운 시작 주소를 갖는다.
    // 3. 변동 시 기존의 구조를 그대로 복사하기 때문에
    //    뒷부분으로만 데이터의 추가제거가 가능하다.

    vector<int> intVector;

    // push_back() : 벡터의 메모리 가장 끝에 값을 저장하는 함수

    intVector.push_back(100);
    intVector.push_back(200);
    intVector.push_back(300);
    intVector.push_back(400);
    intVector.push_back(500);



    for (int i = 0; i < intVector.size(); i++)
    {
        cout << intVector[i] << endl;

    }

    // pop_back() : 벡터의 메모리 가장 끝의 값을 제거하는 함수.
    intVector.pop_back();
    intVector.pop_back();
    intVector.pop_back();
    intVector.pop_back();
    intVector.pop_back();

    cout << "벡터의 메모리는 비어있는가? " << intVector.empty() << endl;

    cout << "벡터의 메모리 크기는? " << intVector.size() << endl;

    cout << "벡터의 메모리가 할당 된 공간 : " << intVector.capacity() << endl;
    */

    // 리듬 게임

    srand(time(NULL));
    vector<string> arrow = { "↑", "←", "↓", "→" };
    vector<string> Q = { "1", "1", "1", "1", "1" };

    char key;
    int mode = 0;
    int nan = 5;


    while (1)
    {

        while (mode == 0)
        {
            for (int i = nan - 1; i >= 0; i--)
            {
                int ar = rand() % 4;

                cout << arrow[ar] << "  를 입력하세요." << endl;

                Q[i] = arrow[ar];

            }

            // 난이도 조절
            if (nan > 10)
            {
                nan = 10;
            }


            // 모드 변경
            mode = 1;
        }

        while (mode == 1)
        {
            // 키입력
            if (_kbhit())
            {
                key = _getch();

                switch (key)
                {
                case UP:
                    cout << "↑  ";
                    if ("↑" == Q.back())
                    {
                        Q.pop_back();
                    }
                    break;

                case LEFT:
                    cout << "←  ";
                    if ("←" == Q.back())
                    {
                        Q.pop_back();
                    }
                    break;

                case RIGHT:
                    cout << "→  ";
                    if ("→" == Q.back())
                    {
                        Q.pop_back();
                    }
                    break;

                case DOWN:
                    cout << "↓  ";
                    if ("↓" == Q.back())
                    {
                        Q.pop_back();
                    }
                    break;
                }
            }


            if (Q.empty() == 1)
            {
                cout << endl << "잘했어오" << endl;

                cout << "다시!" << endl;

                Q = { "1", "1", "1", "1", "1" };
                mode = 0;
            }


        }



    }



    return 0;
}