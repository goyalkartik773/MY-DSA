#include <iostream>
#include <vector>
#include <queue>
#include<stack>
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
int levels(TreeNode* root)
{
    if(root==NULL)
    return 0;
    return 1+max(levels(root->left),levels(root->right));
}
void printtree_level_wise(TreeNode* root)
{
     int n=levels(root);
     for(int i=1;i<=n;i++)
     {
         nthlevel(root,1,i);
         cout<<endl;
     }
}
void iterative_preorder(TreeNode *root)
{
// stack mai right node pahela push kar rahe hai kyuki tabhi left node uppar ayega last in first out hai naa isliye
    stack<TreeNode *> st;
    st.push(root);
    while (st.size() != 0)
    {
        TreeNode *temp = st.top();
            st.pop();
        cout << temp->val << " ";
        if (temp->left != NULL)
            st.push(temp->left);
            if (temp->right != NULL)
            st.push(temp->right);
    }
}
int main()
{

    int arr[] = {3,7,9,12,6,INT_MIN,INT_MIN,18,16,INT_MIN,15,INT_MIN,INT_MIN,INT_MIN,INT_MIN};
    TreeNode* root=constructtree_levelwise(arr,sizeof(arr)/sizeof(arr[0]));
    printtree_level_wise(root);
    cout<<endl;
   iterative_preorder(root);


}
