#include <iostream>
#include <vector>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
void nthlevel(TreeNode *root, int curr,int req)
{
    if (root == NULL)
        return;
        if(curr==req)
        {
            cout<<root->val<<" ";
            return; // more optimised approach jaise hi required level milega uske baad niche wale levels ko call hi nahi lagayega
        }
    nthlevel(root->left,curr+1,req);
    nthlevel(root->right,curr+1,req);
}
int main()
{
    TreeNode *a = new TreeNode(1);
    TreeNode *b = new TreeNode(2);
    TreeNode *c = new TreeNode(3);
    TreeNode *d = new TreeNode(4);
    TreeNode *e = new TreeNode(5);
    TreeNode *f = new TreeNode(6);
    TreeNode *g = new TreeNode(7);
    TreeNode *h = new TreeNode(8);
    TreeNode *i = new TreeNode(9);
    TreeNode *j = new TreeNode(10);
    TreeNode *k = new TreeNode(11);
    // a is the root node of the tree
    a->left = b;
    // left tree connections
    a->right = c;
    b->left = d;
    b->right = e;
    d->left = h;
    e->left = i;
    e->right = j;
    // right tree connections
    c->left = f;
    c->right = g;
    f->right = k;
    int level;
    cout<<"Enter the level of which elements  you want to print ";
    cin>>level;
    cout<<endl;
    nthlevel(a,1,level);

}