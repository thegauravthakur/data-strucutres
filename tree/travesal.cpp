#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node() {
        left = right = nullptr;
    }
};

Node *newNode(int data) {
    Node *temp = new Node;
    temp->data = data;
    return temp;
}

void inOrder(Node *root) {
    if (root != nullptr) {
        inOrder(root->left);
        cout << root->data << ' ';
        inOrder(root->right);
    }
}

void preOrder(Node *root) {
    if (root != nullptr) {
        cout << root->data << ' ';
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(Node *root) {
    if (root != nullptr) {
        cout << root->data << ' ';

        postOrder(root->left);
        postOrder(root->right);
    }
}

int main() {
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    cout << "inorder: ";
    inOrder(root);
    cout << endl << "preOrder: ";
    preOrder(root);
    cout << endl << "postOrder: ";
    postOrder(root);
}
