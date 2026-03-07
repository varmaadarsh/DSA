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

// Postorder Traversal
void postorder(Node* root) {
    if (root == nullptr) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    cout << "Enter tree nodes in preorder, use -1 for NULL:\n";
    Node* root = buildTree();

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}
