#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // C++ 입출력 헤더
#include <math.h> // 루트 및 수학적 헤더
#include <cmath> // 다른 수학 라이브러리 헤더
#include <map>
#include <set>

using namespace std;

int main()
{
    // map(맵)
    /*
    // key와 value로 데이터를 저장시키는 자료 구조이다.
    // 연관 컨테이너 중 트리구조로 최상위 노드에서 파생된 2가지 값을 연결시킨 구조이다.
    // key값을 오름차순으로 정렬한 순서를 가진다.
    // 시간복잡도 O(logN)

    // key값과 value값 2가지 값을 가지기에 선언할 때 자료형을 2개 선언한다.
    // 연관 컨테이너는 key값이 중복될 수 없다.
    // 다만 value값은 중복이 가능하다.
    // value값을 class로 넣은 뒤 엑셀 파일을 삽입하면 다수의 데이터와 연동 가능하다.

    map<string, int> mapData;

    mapData.insert(pair<string, int>("검", 100));
    mapData.insert(pair<string, int>("갑옷", 200));
    mapData.insert(pair<string, int>("투구", 300));
    mapData.insert(pair<string, int>("신발", 400));
    mapData.insert(pair<string, int>("장갑", 500));
    mapData.insert(pair<string, int>("각반", 500)); // '각'반 데이터 최상단에 위치

    // 반복자(iterator)
    map<string, int> ::iterator iter;

    // begin() : map 데이터의 시작 주소를 반환한다.
    // mapData.begin();

    // end() : map 데이터의 마지막 뒤에 있는 주소를 반환한다. 최후에서 -1

    
    for (iter = mapData.begin(); iter != mapData.end(); iter++)
    {
        // iter->first : key를 의미한다.
        cout << "key 값 : " << iter->first << endl;
        cout << "value 값 : " << iter->second << endl;

    }

    // mapData.find("검");
    // find() : map에 있는 key값이 존재하는지 확인하는 함수이다.
    // find는 begin위치에서 end까지 key값을 순회하며 가진다.

    //   ↓map에서 데이터를 찾을 때 iterator를 사용하여 내부에 데이터를 찾는 식
    if (mapData.find("검") != mapData.end())
    {
        cout << "key 값 검이 있습니다." << endl;

    }
    else
    {
        cout << "key값이 없습니다.";
    }

    //                  ↓역순으로 출력하는 이터레이터
    map<string, int> ::reverse_iterator r_iter;

    cout << "-------------------------------" << endl;

    for (r_iter = mapData.rbegin(); r_iter != mapData.rend(); r_iter++)
    {
        // iter->first : key를 의미한다.
        cout << "key 값 : " << r_iter->first << endl;
        cout << "value 값 : " << r_iter->second << endl;

    }
    */

    // 서치 키워드 : 최대 힙, 최소 힙

    // set
    // 이진 트리 구조로 반드시 2개의 값을 가져야하는 자료 구조이다.
    // 최상위 노드에서부터 2개의 자식 노드를 파생시켜 연결하는 구조.
    // 최상위 노드의 데이터가 빠질 경우 연결이 해제되도 상관 없는 최하위 노드의 데이터
    // 값을 가져온 뒤 값을 비교하여 재정렬한다. (힙힙)

    set<int> setData;

    setData.insert(10);
    setData.insert(10); // 중복은 허용 되지 않으며 실제 데이터 값에 포함 되지 않음
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
        cout << "값을 찾았다." << endl;
    }
    else
    {
        cout << "값을 찾지못하였다." << endl;
    }

    cout << "set 데이터의 크기는 : " << setData.size() << endl;

    return 0;
}










