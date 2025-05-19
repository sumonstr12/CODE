#include <iostream>
using namespace std;

struct Node {
    int key;
    struct Node *left, *right;
};

// Function to calculate the depth of the tree
int depth(Node *node) {
    if (node == NULL) {
        return 0;
    }
    int leftDepth = depth(node->left);
    int rightDepth = depth(node->right);
    return max(leftDepth, rightDepth) + 1;
}

// Function to check if the tree is a perfect binary tree
bool isPerfectR(Node *root, int d, int level = 0) {
    if (root == NULL)
        return true;

    // Check if the current node is a leaf node
    if (root->left == NULL && root->right == NULL)
        return (d == level + 1);

    // If the node has one child, return false
    if (root->left == NULL || root->right == NULL)
        return false;

    // Recursively check both subtrees
    return isPerfectR(root->left, d, level + 1) && isPerfectR(root->right, d, level + 1);
}

// Wrapper function to check if the tree is perfect
bool isPerfect(Node *root) {
    int d = depth(root);
    return isPerfectR(root, d);
}

// Function to create a new node
Node *newNode(int k) {
    Node *node = new Node;
    node->key = k;
    node->left = node->right = NULL;
    return node;
}

int main() {
    // Create a perfect binary tree
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    // Check if the binary tree is perfect
    if (isPerfect(root))
        cout << "The tree is a perfect binary tree\n";
    else
        cout << "The tree is not a perfect binary tree\n";

    return 0;
}