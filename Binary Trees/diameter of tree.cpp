#include<iostream>
using namespace std;

int max1 = 0;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int x):val(x),left(NULL),right(NULL){}
};

// Function to calculate the height (levels) of the tree
int height(Node* root)
{
    if(root == NULL)
        return 0;
    return 1 + max(height(root->left), height(root->right));
}

// Function to calculate the diameter of the tree
int diameter_of_tree(Node* root)
{
    if(root == NULL)
        return 0;

    // Calculate the height of left and right subtrees
    int left_height = height(root->left);
    int right_height = height(root->right);

    // Calculate the current diameter
    int current_diameter = left_height + right_height;

    // Update max1 if current diameter is greater
    max1 = max(max1, current_diameter);

    // Recursively find the diameter of the left and right subtrees
    diameter_of_tree(root->left);
    diameter_of_tree(root->right);

    return max1;
}

int main()
{
    // Creating nodes
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    // Linking nodes to form a binary tree
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    // Calculating and printing the diameter
    cout << "Diameter of the tree: " << diameter_of_tree(a) << endl;

    return 0;
}
