#include <iostream>
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
        left = right = NULL;
    }
};
TreeNode *inorder_predessor(TreeNode *root)
{
    // step goes left first then goes right until you found null;
    root = root->left;
    while (root->right != NULL)
        root = root->right;
    return root;
}
TreeNode* delete_node(TreeNode *root, int target)
{
    if (root == NULL)
        return NULL;
    if (root->val == target)
    { // case 1 target node is leaf node
        if (root->left == NULL && root->right == NULL)
            return NULL;
        // case 2 delete a node having one child
        if (root->left == NULL || root->right == NULL) // agar dono NULL hote to upper wali condition chalti
        {
            if (root->left != NULL)
                return root->left;
            else
                return root->right;
        }
        // case 3 delete a root node having two child
        if (root->left != NULL && root->right != NULL)
        {
            TreeNode *temp = inorder_predessor(root);
            root->val = temp->val;
            // delete kardo preddessor ko
            root->left = delete_node(root->left, temp->val);
            return root;
        }
    }
    // step 1 search karo kis node ko delete karna hai wo left treemai hai yaha right tree mai hai
    if (root->val > target)
        root->left = delete_node(root->left, target);
    else // root->val < target
        root->right = delete_node(root->right, target);
    return root;
}
void display(TreeNode *root)
{
    if (root == NULL)
        return;
    display(root->right);
    cout << root->val << " ";
    display(root->left);
}
int main()
{
    TreeNode *a = new TreeNode(5);
    TreeNode *b = new TreeNode(3);
    TreeNode *c = new TreeNode(2);
    TreeNode *d = new TreeNode(4);
    TreeNode *e = new TreeNode(6);
    TreeNode *f = new TreeNode(7);
    a->left = b;
    b->left = c;
    b->right = d;
    a->right = e;
    e->right = f;
    display(a);
    // delete_node(a,3);
    // cout<<endl;
    // display(a);
}