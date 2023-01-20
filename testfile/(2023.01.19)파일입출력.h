#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 100000 // 편의를 위해 버퍼 사이즈 설정

#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더


using namespace std;

void Function(const char* textname) // 함수로 만들기
{
    FILE* file = fopen(textname, "r");

    char buffer[BUFFER_SIZE] = { 0, };


    fread(buffer, 1, BUFFER_SIZE, file);
    printf("%s", buffer);

    fclose(file);
}

int main()
{
    // 파일 입출력
    /*
    // 파일 입력 [fopen]
    // w = write (쓰기 모드)
    // r = read (읽기 모드)
    FILE* file = fopen("data.txt", "w"); //(파일의 이름, 파일 모드)


    fputs("Game password", file);

    // 파일을 닫아줘야함
    fclose(file);

    // 파일 불러오기 (fopen)
    FILE* file = fopen("egg.txt", "r");

    char buffer[BUFFER_SIZE] = { 0, };

    // 파일 읽기[fread]엔 버퍼가 필요하다.
    fread(buffer, 1, BUFFER_SIZE, file); //(버퍼 이름, 속성 크기, 범위, 파일명)
    printf("%s", buffer); //파일과 관련 되어 printf를 사용한다칸다.

    fclose(file);
    */
    // Function("egg.txt");
    Function("user.txt"); // 한글로 된 텍스트 파일은 ANSI로 인코딩해서 불러온다
    std::string name = "한글";

    return 0;
}