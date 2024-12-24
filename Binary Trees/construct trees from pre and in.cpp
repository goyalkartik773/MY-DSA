// construct tree from given the preorder and inorder ek preorder or ek inorder sai to multiple tree ban sakte hai but dono sai ek hi tree banega
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
    }
};
TreeNode *construct_preIn(vector<int> &pre, int pl, int ph, vector<int> &ino, int inlo, int inhi)
{
    if (pl > ph)
        return NULL;
    // preorder ka pahela element hi root of the tree hi hoga
    TreeNode *root = new TreeNode(pre[pl]);
    if (pl == ph)
        return root;
    int pvt_idx = inlo;
    while (pvt_idx <= inhi)
    {
        if (pre[pl] == ino[pvt_idx])
            break;
        pvt_idx++;
    }
    int leftcount = pvt_idx - inlo;
    root->left = construct_preIn(pre, pl + 1, pl + leftcount, ino, inlo, pvt_idx - 1);
    root->right = construct_preIn(pre, pl + leftcount + 1, ph, ino, pvt_idx + 1, inhi);
    return root;
}
void display(TreeNode *root)
{
    if (root == NULL)
        return;
    display(root->left);
    cout << root->val << " ";
    display(root->right);
}
int main()
{
    vector<int> pre = {3, 9, 20, 15, 7};
    vector<int> ino = {9, 3, 5, 20, 7};
    int n = pre.size();
    TreeNode *root = construct_preIn(pre, 0, n - 1, ino, 0, n - 1);
    display(root);
}