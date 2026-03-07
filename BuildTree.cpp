
//                        1. BUILD TREE USING NODES AND POINTERS (RECURSIVELY)

// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };

// class BinaryTree {
// public:
//     Node* root;  

//     BinaryTree() {
//         root = nullptr;
//     }

//     Node* buildTree() {
//         int val;
//         cout << "Enter node value (-1 for NULL): ";
//         cin >> val;

//         if (val == -1) return nullptr;

//         Node* newNode = new Node(val);
//         cout << "Entering left child of " << val << endl;
//         newNode->left = buildTree();
//         cout << "Entering right child of " << val << endl;
//         newNode->right = buildTree();

//         return newNode;
//     }

// };

// int main() {
//     BinaryTree tree;
//     tree.root = tree.buildTree();

//     return 0;
// }



//                                2. TREE CONSTRUCTION USING QUEUE



// #include <iostream>
// #include <queue>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// Node* buildTreeUsingQueue() {
//     int val;
//     cout << "Enter root node value: ";
//     cin >> val;

//     if (val == -1) return nullptr;  

//     Node* root = new Node(val);
//     queue<Node*> q;
//     q.push(root);

//     while (!q.empty()) {
//         Node* current = q.front();
//         q.pop();

//         int leftVal, rightVal;

//         cout << "Enter left child of " << current->data << " (-1 for NULL): ";
//         cin >> leftVal;
//         if (leftVal != -1) {
//             current->left = new Node(leftVal);
//             q.push(current->left);
//         }

//         cout << "Enter right child of " << current->data << " (-1 for NULL): ";
//         cin >> rightVal;
//         if (rightVal != -1) {
//             current->right = new Node(rightVal);
//             q.push(current->right);
//         }
//     }

//     return root;
// }

// void inorderTraversal(Node* root) {
//     if (root == nullptr) return;
//     inorderTraversal(root->left);
//     cout << root->data << " ";
//     inorderTraversal(root->right);
// }

// int main() {
//     Node* root = buildTreeUsingQueue();

//     cout << "\nInorder Traversal of the Tree: ";
//     inorderTraversal(root);
//     cout << endl;

//     return 0;
// }



//                                3. COMPLETE BINARY TREES FROM ARRAY 

// #include <iostream>
// using namespace std;

// // Node class
// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// // Tree class
// class Tree {
// public:
//     Node* root;

//     Tree() {
//         root = nullptr;
//     }

//     // Builds tree recursively from array
//     Node* buildFromArray(int arr[], int index, int size) {
//         if (index >= size) return nullptr;

//         Node* node = new Node(arr[index]);
//         node->left = buildFromArray(arr, 2 * index + 1, size);
//         node->right = buildFromArray(arr, 2 * index + 2, size);
//         return node;
//     }

//     // Initializes tree build
//     void build(int arr[], int size) {
//         root = buildFromArray(arr, 0, size);
//     }

//     // Displays node info
//     void display(Node* node) {
//         if (!node) return;

//         cout << "Node: " << node->data;
//         if (node->left)  cout << " | Left Child: " << node->left->data;
//         if (node->right) cout << " | Right Child: " << node->right->data;
//         cout << endl;

//         display(node->left);   // Left subtree
//         display(node->right);  // Right subtree
//     }

//     // Helper to call display from root
//     void displayTree() {
//         display(root);
//     }
// };

// // Main function
// int main() {
//     Tree tree;
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     tree.build(arr, size);     // Build the tree
//     tree.displayTree();        // Display the tree

//     return 0;
// }


//          4. COMPLETE BINARY TREE CONSTRUCTION USING ARRAY ( WITHOUT HELPER FUNCTION)

// #include <iostream>
// using namespace std;

// // Node class
// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// // Tree class
// class Tree {
// public:
//     Node* root;

//     Tree() {
//         root = nullptr;
//     }

//     // Build complete binary tree recursively
//     Node* insertLevelOrder(int arr[], int index, int size) {
//         if (index >= size) return nullptr;

//         Node* node = new Node(arr[index]);
//         node->left = insertLevelOrder(arr, 2 * index + 1, size);
//         node->right = insertLevelOrder(arr, 2 * index + 2, size);

//         return node;
//     }

//     // Display each node and its children directly
//     void display(Node* node) {
//         if (!node) return;

//         cout << "Node: " << node->data;
//         if (node->left) cout << " | Left Child: " << node->left->data;
//         if (node->right) cout << " | Right Child: " << node->right->data;
//         cout << endl;

//         display(node->left);   // left subtree
//         display(node->right);  // right subtree
//     }
// };

// int main() {
//     Tree tree;
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     tree.root = tree.insertLevelOrder(arr, 0, n); // build tree
//     tree.display(tree.root);                      // call directly without wrapper

//     return 0;
// }


