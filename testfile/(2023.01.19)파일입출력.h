#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 100000 // ���Ǹ� ���� ���� ������ ����

#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���


using namespace std;

void Function(const char* textname) // �Լ��� �����
{
    FILE* file = fopen(textname, "r");

    char buffer[BUFFER_SIZE] = { 0, };


    fread(buffer, 1, BUFFER_SIZE, file);
    printf("%s", buffer);

    fclose(file);
}

int main()
{
    // ���� �����
    /*
    // ���� �Է� [fopen]
    // w = write (���� ���)
    // r = read (�б� ���)
    FILE* file = fopen("data.txt", "w"); //(������ �̸�, ���� ���)


    fputs("Game password", file);

    // ������ �ݾ������
    fclose(file);

    // ���� �ҷ����� (fopen)
    FILE* file = fopen("egg.txt", "r");

    char buffer[BUFFER_SIZE] = { 0, };

    // ���� �б�[fread]�� ���۰� �ʿ��ϴ�.
    fread(buffer, 1, BUFFER_SIZE, file); //(���� �̸�, �Ӽ� ũ��, ����, ���ϸ�)
    printf("%s", buffer); //���ϰ� ���� �Ǿ� printf�� ����Ѵ�ĭ��.

    fclose(file);
    */
    // Function("egg.txt");
    Function("user.txt"); // �ѱ۷� �� �ؽ�Ʈ ������ ANSI�� ���ڵ��ؼ� �ҷ��´�
    std::string name = "�ѱ�";

    return 0;
}