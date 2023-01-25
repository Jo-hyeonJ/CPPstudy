#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더

using namespace std;

int main()
{
    //string 문
    /*
    std::string nickName = "JJJ";

    cout << "nickName의 값 : " << nickName << endl;
    cout << "nickName의 크기 : " << nickName.length() << endl;
    // length() : null 문자를 포함하지 않고 크기를 반환하는 함수

    nickName = "jojojun";

    cout << "nickName의 값 : " << nickName << endl;
    cout << "nickName의 크기 : " << nickName.length() << endl;

    nickName.clear();
    // clear() : 문자열을 비우는 함수이다.

    cout << "nickName의 값 : " << nickName << endl;
    cout << "nickName의 크기 : " << nickName.length() << endl;

    //cin >> nickName;
    char line[256];
    cin.getline(line, 200);
    // 띄워쓰기까지 출력하는 함수

    cout << "nickName의 값 : " << line << endl;
    cout << "nickName의 크기 : " << sizeof(line) << endl; // 256으로 나옴
    */

    // 회문 판별

    int right = 0;

    std::string fishword;

    cin >> fishword;

    cout << "입력된 문자 : " << fishword << endl;

    int longer = fishword.length();


    for (int i = 0; i < longer / 2 + longer % 2; i++)
    {
        cout << "비교 문자 : " << fishword[i] << "와";
        cout << fishword[longer - 1 - i] << endl;

        if (fishword[i] != fishword[longer - 1 - i])
        {
            right = 1;
        }
    }

    if (right == 1)
    {
        cout << fishword << "는 회문이 아닙니다." << endl;
    }
    else if (right == 0)
    {
        cout << fishword << "는 회문입니다." << endl;
    }
    else
    {
        cout << "오류!!" << endl;
    }





    return 0;
}