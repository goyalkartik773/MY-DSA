#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

public:
    TreeNode(int val)
    {
        this->val = val;
        left = right = NULL;
    }
};
TreeNode *create_BST(TreeNode *root, int value)
{
    if (root == NULL)
        return new TreeNode(value);
    if (root->val > value)
        root->left = create_BST(root->left, value);
    else
        root->right = create_BST(root->right, value);
    return root;
}
void inorder_display(TreeNode *root, vector<int> &v)
{
    if (root == NULL)
        return;
    inorder_display(root->right, v);
    v.push_back(root->val);
    inorder_display(root->left, v);
}
TreeNode* level_order(vector<int> arr)
{
    TreeNode *root = new TreeNode(arr[0]);
    queue<TreeNode *> q;
    q.push(root);
    int i = 1;
    int j = 2;
    while (q.size() != 0 && i < arr.size())
    {
        TreeNode *temp = q.front();
        q.pop();
        TreeNode *left;
        TreeNode *right;
        if (arr[i] != INT_MIN)
            left = new TreeNode(arr[i]);
        else
            left = NULL;
        if (arr[j] != INT_MIN)
            right = new TreeNode(arr[j]);
        else
            right = NULL;
        temp->left = left;
        temp->right = right;
        if (left != NULL)
            q.push(left);
        if (right != NULL)
            q.push(right);
        i += 2;
        j += 2;
    }
    return root;
}
TreeNode *convert_bst_maxheap(TreeNode *root)
{
    // first store the inorder travrersal of bst which is sorted
    vector<int> v;
    inorder_display(root, v);
    // now create tree using level order traversal from above vector which will be the max heap
    return level_order(v);
}
void print_level(TreeNode* root)
{
    queue<TreeNode*> q;
    q.push(root);
    while(q.size()!=0)
    {
        TreeNode* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        q.push(temp->left);
        q.push(temp->right);
    }
}
int main()
{
    int arr[] = {10, 5, 1, 8, 16, 12, 20};
    int n = sizeof(arr) / 4;
    TreeNode *root;
    for (int i = 0; i < n; i++)
    {
        root = create_BST(root, arr[i]);
    }
    root = convert_bst_maxheap(root);
    print_level(root);
}