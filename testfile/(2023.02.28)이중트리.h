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
    // ��� ��ü�� �����ؾ� �մϴ�.

    // ����� data ����

    // ����� leftChild ������ ���� ����

    // ����� rightChild ������ ���� ����

    Node* node = new Node;

    node->data = data;
    node->left = leftChild;
    node->right = rightChild;

    return node;

}

// ����
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



// ����
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

// ����
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
    // Ʈ�� ������?
    // �� ��忡�� �����ؼ� �ٸ� �������� ��ȸ�Ͽ�
    // �ڱ� �ڽſ��� ���ƿ��� ��ȯ�� ���� ���� �׷����Դϴ�.

    // ���� Ʈ����?
    // �ִ� 2���� �ڽ� ��带 ������ Ʈ���Դϴ�.

    Node* node7 = CreateNode(70, NULL, NULL);
    Node* node6 = CreateNode(60, NULL, NULL);
    Node* node5 = CreateNode(50, NULL, NULL);
    Node* node4 = CreateNode(40, NULL, NULL);

    Node* node3 = CreateNode(30, node6, node7);
    Node* node2 = CreateNode(20, node4, node5);
    Node* node1 = CreateNode(10, node2, node3);

    // Ʈ���� ��ȸ

    // ���� ��ȸ, ���� ��ȸ, ���� ��ȸ

    // ���� ��ȸ : �ڱ� �ڽ� �� ���� ��� �湮 �� ������ ��� �湮
    // ���� ��ȸ : ���� ��� �湮 �� �ڱ� �ڽ��� ��� �� ������ ��� �湮
    // ���� ��ȸ : ���� ��� �湮 �� ������ ��� �湮 �� �ڱ� �ڽ� ���

    // ��ȸ�� root node(�ֻ�� ���)���� �����Ѵ�.

    cout << "���� ��ȸ" << endl;
    patrol_1(node1);

    cout << "���� ��ȸ" << endl;
    patrol_2(node1);

    cout << "���� ��ȸ" << endl;
    patrol_3(node1);

    return 0;
}