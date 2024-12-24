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
    TreeNode(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
TreeNode* constructtree_levelwise(int arr[], int n)
{
    queue<TreeNode *> q;
    TreeNode *root = new TreeNode(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while (q.size() != 0 && i < n)
    {
        TreeNode *temp = q.front();
        q.pop();
        TreeNode *left;
        TreeNode *right;
        if (arr[i] != INT_MIN)
            left = new TreeNode(arr[i]);
        else
            left = NULL;
        if (j!=n && arr[j] != INT_MIN)
            right = new TreeNode(arr[j]);
        else
            right = NULL;
        temp->left=left;
        temp->right=right;
        if(left!=NULL)
        q.push(left);
        if(right!=NULL)
        q.push(right);
        i+=2;
        j+=2;
    }
    return root;
}
void display(TreeNode* root)
{
    if(root==NULL)
    return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5, INT_MIN, 6, INT_MIN, INT_MIN, 7, 8, 9, INT_MIN};
    TreeNode* root=constructtree_levelwise(arr,sizeof(arr)/sizeof(arr[0]));
    display(root);

   
}