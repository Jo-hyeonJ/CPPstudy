#pragma once
#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* CreateNode(int data, Node* leftChild, Node* rightChild)
{
    // 노드 객체를 생성해야 합니다.

    // 노드의 data 저장

    // 노드의 leftChild 포인터 변수 설정

    // 노드의 rightChild 포인터 변수 설정

    Node* node = new Node;

    node->data = data;
    node->left = leftChild;
    node->right = rightChild;

    return node;

}

// 전위
void patrol_1(Node* node)
{

    cout << node->data << endl;

    if (node->left != NULL)
    {
        patrol_1(node->left);
    }

    if (node->right != NULL)
    {
        patrol_1(node->right);
    }
}



// 중위
void patrol_2(Node* node)
{

    if (node->left != NULL)
    {
        patrol_2(node->left);
    }

    cout << node->data << endl;

    if (node->right != NULL)
    {
        patrol_2(node->right);
    }

}

// 후위
void patrol_3(Node* node)
{

    if (node->left != NULL)
    {
        patrol_3(node->left);
    }


    if (node->right != NULL)
    {
        patrol_3(node->right);
    }

    cout << node->data << endl;


}

int main()
{
    // 트리 구조란?
    // 한 노드에서 시작해서 다른 정점들을 순회하여
    // 자기 자신에게 돌아오는 순환이 없는 연결 그래프입니다.

    // 이진 트리란?
    // 최대 2개의 자식 노드를 가지는 트리입니다.

    Node* node7 = CreateNode(70, NULL, NULL);
    Node* node6 = CreateNode(60, NULL, NULL);
    Node* node5 = CreateNode(50, NULL, NULL);
    Node* node4 = CreateNode(40, NULL, NULL);

    Node* node3 = CreateNode(30, node6, node7);
    Node* node2 = CreateNode(20, node4, node5);
    Node* node1 = CreateNode(10, node2, node3);

    // 트리의 순회

    // 전위 순회, 중위 순회, 후위 순회

    // 전위 순회 : 자기 자신 → 왼쪽 노드 방문 → 오른쪽 노드 방문
    // 중위 순회 : 왼쪽 노드 방문 → 자기 자신을 출력 → 오른쪽 노드 방문
    // 후위 순회 : 왼쪽 노드 방문 → 오른쪽 노드 방문 → 자기 자신 출력

    // 순회는 root node(최상단 노드)부터 접근한다.

    cout << "전위 순회" << endl;
    patrol_1(node1);

    cout << "중위 순회" << endl;
    patrol_2(node1);

    cout << "후위 순회" << endl;
    patrol_3(node1);

    return 0;
}