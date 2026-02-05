#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Build tree from user input using -1 for null nodes (preorder)
Node* buildTree() {
    int val;
    cin >> val;

    if (val == -1) {
        return nullptr;
    }

    Node* root = new Node(val);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}

// Inorder Traversal
void inorder(Node* root) {
    if (root == nullptr) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    cout << "Enter tree nodes in preorder, use -1 for NULL:\n";
    Node* root = buildTree();

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}
