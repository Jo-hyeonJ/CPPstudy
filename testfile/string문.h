#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���

using namespace std;

int main()
{
    //string ��
    /*
    std::string nickName = "JJJ";

    cout << "nickName�� �� : " << nickName << endl;
    cout << "nickName�� ũ�� : " << nickName.length() << endl;
    // length() : null ���ڸ� �������� �ʰ� ũ�⸦ ��ȯ�ϴ� �Լ�

    nickName = "jojojun";

    cout << "nickName�� �� : " << nickName << endl;
    cout << "nickName�� ũ�� : " << nickName.length() << endl;

    nickName.clear();
    // clear() : ���ڿ��� ���� �Լ��̴�.

    cout << "nickName�� �� : " << nickName << endl;
    cout << "nickName�� ũ�� : " << nickName.length() << endl;

    //cin >> nickName;
    char line[256];
    cin.getline(line, 200);
    // ���������� ����ϴ� �Լ�

    cout << "nickName�� �� : " << line << endl;
    cout << "nickName�� ũ�� : " << sizeof(line) << endl; // 256���� ����
    */

    // ȸ�� �Ǻ�

    int right = 0;

    std::string fishword;

    cin >> fishword;

    cout << "�Էµ� ���� : " << fishword << endl;

    int longer = fishword.length();


    for (int i = 0; i < longer / 2 + longer % 2; i++)
    {
        cout << "�� ���� : " << fishword[i] << "��";
        cout << fishword[longer - 1 - i] << endl;

        if (fishword[i] != fishword[longer - 1 - i])
        {
            right = 1;
        }
    }

    if (right == 1)
    {
        cout << fishword << "�� ȸ���� �ƴմϴ�." << endl;
    }
    else if (right == 0)
    {
        cout << fishword << "�� ȸ���Դϴ�." << endl;
    }
    else
    {
        cout << "����!!" << endl;
    }





    return 0;
}