#include <bits/stdc++.h>

using namespace std;

struct Node {
    Node *left;
    int data;
    Node *right;
};

int main() {
    Node *root = new Node;
    Node *left = new Node;
    Node *right = new Node;

    left->data = 5;
    left->right = nullptr;
    left->left = nullptr;

    right->data = 7;
    right->left = nullptr;
    right->right = nullptr;

    root->data = 1;
    root->left = left;
    root->right = right;right
}