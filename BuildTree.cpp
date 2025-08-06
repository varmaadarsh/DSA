#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree {
public:
    Node* root;  

    BinaryTree() {
        root = nullptr;
    }

    Node* buildTree() {
        int val;
        cout << "Enter node value (-1 for NULL): ";
        cin >> val;

        if (val == -1) return nullptr;

        Node* newNode = new Node(val);
        cout << "Entering left child of " << val << endl;
        newNode->left = buildTree();
        cout << "Entering right child of " << val << endl;
        newNode->right = buildTree();

        return newNode;
    }

};

int main() {
    BinaryTree tree;
    tree.root = tree.buildTree();

    return 0;
}
