# BST_Kth_Element_Finder

## Description
This program implements a Binary Search Tree (BST) in C++ and provides functions to find the k-th smallest and k-th largest elements in the tree. The elements are collected via an in-order traversal, which sorts them, allowing easy retrieval of specific elements.

## Features
- **Insert Nodes:** Adds nodes to the BST.
- **Find k-th Smallest Element:** Retrieves the k-th smallest element in the BST.
- **Find k-th Largest Element:** Retrieves the k-th largest element in the BST.

## Functions
- **`Node* insert(Node* root, int value)`**
  - Inserts a value into the BST.
- **`void inOrderTraversal(Node* root, vector<int>& elements)`**
  - Performs an in-order traversal and stores elements in a vector.
- **`int kthSmallest(Node* root, int k)`**
  - Finds the k-th smallest element in the BST.
- **`int kthLargest(Node* root, int k)`**
  - Finds the k-th largest element in the BST.

Output:
    Displays the k-th smallest and k-th largest elements in the BST.

Example:
    For the provided BST with elements [50, 30, 20, 40, 70, 60, 80] and k = 3:

    The 3rd smallest element is 30.
    The 3rd largest element is 60.

Notes
    Ensure k is within the valid range (1 to number of nodes in the BST) to avoid invalid results.