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
void morris_inorder_traversal(TreeNode *root)
{
    TreeNode *curr = root;
    while (curr != NULL)
    {
        if (curr->left != NULL) // predecessor nikal sakta hai
        {
            TreeNode *pred = curr->left;
            while (pred->right != NULL && pred->right != curr)
            {
                pred = pred->right;
            }
            if (pred->right == NULL) // farzi right connection build up karega
            {
                pred->right = curr;
                curr = curr->left;
            }
            else // pred->right = curr // remove farzi connections
            {
                pred->right = NULL;
                // visit this node
                cout << curr->val << " ";
                curr = curr->right;
            }
        }
        else // curr->left == NULL
        {
            // visit the node
            cout << curr->val << " ";
            curr = curr->right;
        }
    }
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
    // morris travesal mai space complexity O(1) hai kyuki isme humne koi recursion ya extra data structure ka koi use nahi kiya hai
    morris_inorder_traversal(a);
}