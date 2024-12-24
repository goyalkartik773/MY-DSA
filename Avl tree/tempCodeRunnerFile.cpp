
#include <iostream>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    int height; // every node will have height;
    TreeNode(int val)
    {
        this->val = val;
        left = right = NULL;
        height = 1; // new node ki height to 1 hi hogi starting mai
    }
};
int getheight(TreeNode *root)
{
    if (root == NULL)
        return 0;
    return root->height;
}
int getbalance(TreeNode *root)
{
    if (root == NULL)
        return 0;
    return root->left->height - root->right->height;
}
TreeNode *rightrotation(TreeNode *root)
{
    TreeNode *child = root->left;
    // save the node of child right
    TreeNode *childright = child->right;
    child->right = root;
    root->left = childright;

    // update the height of child and root node means dono ki height ko dobara calculate karlo inka childs hi change hua hai

    root->height = 1 + max(getheight(root->left), getheight(root->right));
    child->height = 1 + max(getheight(child->left), getheight(child->right));

    // child node ko return karna kyuki root ke uppar jo connections tha abb wo root node ke sath karne hai
    return child;
}
TreeNode *leftrotation(TreeNode *root)
{
    TreeNode *child = root->right;
    TreeNode *leftchild = root->left;

    child->left = root;
    root->right = leftchild;

    // update the height of child and root node means dono ki height ko dobara calculate karlo inka childs hi change hua hai

    root->height = 1 + max(getheight(root->left), getheight(root->right));
    child->height = 1 + max(getheight(child->left), getheight(child->right));

    // child node ko return karna kyuki root ke uppar jo connections tha abb wo root node ke sath karne hai
    return child;
}
TreeNode *built_avl(TreeNode *root, int key)
{
    if (root == NULL)
        return new TreeNode(key);

    if (root->val > key) // left insertion
        root->left = built_avl(root->left, key);
    else if (root->val < key) // right insertion
        root->right = built_avl(root->right, key);
    else // duplicate elements mai koi insertion nahi karega
        return root;
    // update the height of each node

    root->height = 1 + max(getheight(root->left), getheight(root->right));

    // check balancing of each node

    int balance_factor = getbalance(root);

    // case 1 left left (right rotation)
    if (balance_factor > 1 && root->left->val > key)
    {
        return rightrotation(root);
    }
    // case 2 right right (left rotation)
    if (balance_factor < -1 && root->right->val < key)
    {
        return leftrotation(root);
    }
    // case 3 left right rotation
    if (balance_factor > 1 && root->left->val < key)
    {
        root->left = leftrotation(root->left);
        return rightrotation(root);
    }
    // case 4 right left rotation
    if (balance_factor < -1 && root->right->val > key)
    {
        root->right = rightrotation(root->right);
        return leftrotation(root);
    }
    // no balancing is required
    return root;
}
void preorder(TreeNode *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    preorder(root->left);

    preorder(root->right);
}
void inorder(TreeNode *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
int main()
{
    TreeNode *root = NULL;
    root = built_avl(root, 10);
    root = built_avl(root, 20);
    root = built_avl(root, 30);
    root = built_avl(root, 50);
    root = built_avl(root, 70);
    root = built_avl(root, 5);
    root = built_avl(root, 100);
    root = built_avl(root, 95);
    cout << "preorder : " << endl;
    preorder(root);
    cout << "inorder : " << endl;
    inorder(root);
}
