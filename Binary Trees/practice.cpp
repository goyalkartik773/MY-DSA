#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val = val;
        left = right = NULL;
    }
};
void print_n_level(Node* root,int k,int n)
{
    if(root==NULL)
        return;
    if(n==k){
    cout<<root->val<<" ";
    return;}
    print_n_level(root->left,k+1,n);
    print_n_level(root->right,k+1,n);
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
    print_n_level(a,1,3);
}
