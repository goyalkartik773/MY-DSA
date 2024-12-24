#include <iostream>
using namespace std;
int sum = 0;
int size1 = 0;
int max1 = 0;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        left = right = NULL;
    }
};

void display(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    display(root->left);
    display(root->right);
}
void sum_tree(Node *root)
{
    if (root == NULL)
        return;
    sum += root->val;
    sum_tree(root->left);
    sum_tree(root->right);
}
int sumtree(Node *root)
{
    if (root == NULL)
        return 0;
    return root->val + sumtree(root->left) + sumtree(root->right);
}
void size_tree(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    size1 += 1;
    size_tree(root->left);
    size_tree(root->right);
}
int sizetree(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + sizetree(root->left) + sizetree(root->right);
}
void max_tree(Node *root)
{
    if (root == NULL)
        return;
    max1 = max(max1, root->val);
    max_tree(root->left);
    max_tree(root->right);
}

int maxtree(Node *root)
{
    if (root == NULL)
        return INT_MIN;
    return max(root->val, max(maxtree(root->left), maxtree(root->right)));
}
int levels(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(levels(root->left), levels(root->right));
}
int main()
{
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

/*         1

    2            3

4        5    6      7

*/
        display(a);
    cout << endl;
    // sum of the tree

    // sum_tree(a);
    // cout << sum;
    //  cout<<sumtree(a);

    // size of the tree
    // sizetree(a);
    // size_tree(a);
    // cout<<size1;

    // cout<<maxtree(a);
    //    max_tree(a);
    //    cout<<max1;

    cout << levels(a);
}