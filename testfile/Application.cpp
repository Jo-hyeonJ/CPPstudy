#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ ����� ���
#include <math.h> // ��Ʈ �� ������ ���
#include <cmath> // �ٸ� ���� ���̺귯�� ���
#include <map>
#include <set>

using namespace std;

int main()
{
    // map(��)
    /*
    // key�� value�� �����͸� �����Ű�� �ڷ� �����̴�.
    // ���� �����̳� �� Ʈ�������� �ֻ��� ��忡�� �Ļ��� 2���� ���� �����Ų �����̴�.
    // key���� ������������ ������ ������ ������.
    // �ð����⵵ O(logN)

    // key���� value�� 2���� ���� �����⿡ ������ �� �ڷ����� 2�� �����Ѵ�.
    // ���� �����̳ʴ� key���� �ߺ��� �� ����.
    // �ٸ� value���� �ߺ��� �����ϴ�.
    // value���� class�� ���� �� ���� ������ �����ϸ� �ټ��� �����Ϳ� ���� �����ϴ�.

    map<string, int> mapData;

    mapData.insert(pair<string, int>("��", 100));
    mapData.insert(pair<string, int>("����", 200));
    mapData.insert(pair<string, int>("����", 300));
    mapData.insert(pair<string, int>("�Ź�", 400));
    mapData.insert(pair<string, int>("�尩", 500));
    mapData.insert(pair<string, int>("����", 500)); // '��'�� ������ �ֻ�ܿ� ��ġ

    // �ݺ���(iterator)
    map<string, int> ::iterator iter;

    // begin() : map �������� ���� �ּҸ� ��ȯ�Ѵ�.
    // mapData.begin();

    // end() : map �������� ������ �ڿ� �ִ� �ּҸ� ��ȯ�Ѵ�. ���Ŀ��� -1

    
    for (iter = mapData.begin(); iter != mapData.end(); iter++)
    {
        // iter->first : key�� �ǹ��Ѵ�.
        cout << "key �� : " << iter->first << endl;
        cout << "value �� : " << iter->second << endl;

    }

    // mapData.find("��");
    // find() : map�� �ִ� key���� �����ϴ��� Ȯ���ϴ� �Լ��̴�.
    // find�� begin��ġ���� end���� key���� ��ȸ�ϸ� ������.

    //   ��map���� �����͸� ã�� �� iterator�� ����Ͽ� ���ο� �����͸� ã�� ��
    if (mapData.find("��") != mapData.end())
    {
        cout << "key �� ���� �ֽ��ϴ�." << endl;

    }
    else
    {
        cout << "key���� �����ϴ�.";
    }

    //                  �鿪������ ����ϴ� ���ͷ�����
    map<string, int> ::reverse_iterator r_iter;

    cout << "-------------------------------" << endl;

    for (r_iter = mapData.rbegin(); r_iter != mapData.rend(); r_iter++)
    {
        // iter->first : key�� �ǹ��Ѵ�.
        cout << "key �� : " << r_iter->first << endl;
        cout << "value �� : " << r_iter->second << endl;

    }
    */

    // ��ġ Ű���� : �ִ� ��, �ּ� ��

    // set
    // ���� Ʈ�� ������ �ݵ�� 2���� ���� �������ϴ� �ڷ� �����̴�.
    // �ֻ��� ��忡������ 2���� �ڽ� ��带 �Ļ����� �����ϴ� ����.
    // �ֻ��� ����� �����Ͱ� ���� ��� ������ �����ǵ� ��� ���� ������ ����� ������
    // ���� ������ �� ���� ���Ͽ� �������Ѵ�. (����)

    set<int> setData;

    setData.insert(10);
    setData.insert(10); // �ߺ��� ��� ���� ������ ���� ������ ���� ���� ���� ����
    setData.insert(20);
    setData.insert(30);
    setData.insert(40);
    setData.insert(50);

    set<int>::iterator iter;

    for (iter = setData.begin(); iter != setData.end(); iter++)
    {
        cout << *iter << endl;

    }

    iter = setData.find(50);

    if (iter != setData.end())
    {
        cout << "���� ã�Ҵ�." << endl;
    }
    else
    {
        cout << "���� ã�����Ͽ���." << endl;
    }

    cout << "set �������� ũ��� : " << setData.size() << endl;

    return 0;
}










