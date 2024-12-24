#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *left;  // har node ke pass ek left node hoga
    Node *right; // ek right node hoga binary tree mai har root node do or node sai connect hoti hai
    Node(int x) : val(x), left(NULL), right(NULL) {}
};
void displaytree(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    displaytree(root->left);
    displaytree(root->right);
}
int sumtree(Node *root)
{
    if (root == NULL)
    return 0;
    return root->val + sumtree(root->left) + sumtree(root->right);
}
int maxtree(Node* root)
{
    // if(root->left==NULL||root->right==NULL)
    // return root->val;
    if (root == NULL)
    return INT_MIN;
    return max(root->val,max(maxtree(root->left),maxtree(root->right)));
}
int treelevels(Node* root)
{
    if(root==NULL)
    return 0;
    return 1+max(treelevels(root->left),treelevels(root->right));
}
int main()
{    
    // tree kon humesha three hisse me rakha karo root left tree or right tree;
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);
    // a will be the tree node in my binary tree


    //             1
    //        2          3
    //    4       5  6         7



    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
   // displaytree(a);
   // cout<<sumtree(a);
    cout<<treelevels(a);

}