#include <iostream>
#include <vector>

using namespace std;

// Implementing a Node structure for the binary search tree
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Function to insert a value into the binary search tree
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

// Function to perform in-order traversal and store nodes in a vector
void inOrderTraversal(Node* root, vector<int>& elements) {
    if (root == nullptr) return;

    inOrderTraversal(root->left, elements);
    elements.push_back(root->data);
    inOrderTraversal(root->right, elements);
}

// Function to find the k-th smallest element
int kthSmallest(Node* root, int k) {
    vector<int> elements;
    inOrderTraversal(root, elements);
    if (k > 0 && k <= elements.size()) {
        return elements[k - 1];
    }
    return -1; // Return -1 if k is out of range
}

// Function to find the k-th largest element
int kthLargest(Node* root, int k) {
    vector<int> elements;
    inOrderTraversal(root, elements);
    if (k > 0 && k <= elements.size()) {
        return elements[elements.size() - k];
    }
    return -1; // Return -1 if k is out of range
}

int main() {
    Node* root = nullptr;

    // Insert values into the binary search tree
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    int k = 3; // k-th value to find

    // Finding k-th smallest element
    int kthSmallestElement = kthSmallest(root, k);
    if (kthSmallestElement != -1) {
        cout << "The " << k << "-th smallest element is: " << kthSmallestElement << endl;
    } else {
        cout << "Invalid value of k" << endl;
    }

    // Finding k-th largest element
    int kthLargestElement = kthLargest(root, k);
    if (kthLargestElement != -1) {
        cout << "The " << k << "-th largest element is: " << kthLargestElement << endl;
    } else {
        cout << "Invalid value of k" << endl;
    }

    return 0;
}
