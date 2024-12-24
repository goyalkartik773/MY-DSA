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
// in postorder traversal of tree(using recursion) pahle  call lagti hai fhir call lagti hai fhir kaam hota hai matlab  nodes ki value print hoti hai
void postorder_traversal(TreeNode *root, vector<int> &v)
{
    if (root == NULL)
        return;
    postorder_traversal(root->left, v);
    postorder_traversal(root->right, v);
    cout << root->val << " ";
    v.push_back(root->val);
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
    // first root node print hoga then left tree last mai right tree print hoga

    // method 1 to calculate postorder_traversal
    // using recursion call stack
    //  method 2
    //  using shortcut  (left)  (right) root pahela level wise isme nodes likh doo baad mai
    //  left ko tree mankar ussse fhir theen mai divide karo until pura solve naa hojay same with right tree also
    //  method 3
    //  recursion tree banakar jisme euler movement ho jaha jaha pre likha hai wo wo print karte chalna
 //   postorder_traversal(a);
    // 8 4 9 10 5 2 11 6 7 3 1
 
 // we can store the value of nodes of our tree in vector also in post order also
 vector<int> arr;
 cout<<"postorder traversal: \n";
 postorder_traversal(a,arr);
 cout<<endl;
 for(int ele:arr)
 cout<<ele<<" ";
}