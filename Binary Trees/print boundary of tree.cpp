#include <iostream>
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
void displayleft(TreeNode *root)
{
    if(root==NULL)
    return;
    if (root->left == NULL && root->right == NULL)
        return;
    cout << root->val << " ";
    if (root->left != NULL)
        displayleft(root->left);
    else
        displayleft(root->right);
}
void displayleaf(TreeNode *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->val << " ";
    }
    displayleaf(root->left);
    displayleaf(root->right);
}
void displayright(TreeNode *root)
{
    if (root->left == NULL && root->right == NULL)
        return;
    if (root->right != NULL)
        displayright(root->right);
    else
        displayright(root->left);
    cout << root->val << " ";
}
TreeNode* constructTreeLevelWise(int arr[], int n) {
    if (n == 0) {
        return nullptr; // Empty array, return null tree
    }

    TreeNode* root = new TreeNode(arr[0]);
    queue<TreeNode*> q;
    q.push(root);

    int i = 1;
    while (i < n) {
        TreeNode* curr = q.front();
        q.pop();

        // Create left child if arr[i] is not INT_MIN
        if (arr[i] != INT_MIN) {
            curr->left = new TreeNode(arr[i]);
            q.push(curr->left);
        }
        i++;

        // Create right child if arr[i] is not INT_MIN and within bounds
        if (i < n && arr[i] != INT_MIN) {
            curr->right = new TreeNode(arr[i]);
            q.push(curr->right);
        }
        i++;
    }

    return root;
}

void printlevelwise(TreeNode *root)
{
   queue<TreeNode*> q;
   q.push(root);
   while(q.size()!=0)
   {
       TreeNode* temp=q.front();
       q.pop();
       cout<<temp->val<<" ";
       if(temp->left!=NULL)
       q.push(temp->left);
       if(temp->right!=NULL)
       q.push(temp->right);
   }
}
int main()
{
    // TreeNode *a = new TreeNode(1);
    // TreeNode *b = new TreeNode(7);
    // TreeNode *c = new TreeNode(2);
    // TreeNode *d = new TreeNode(6);
    // TreeNode *e = new TreeNode(8);
    // TreeNode *f = new TreeNode(7);
    // TreeNode *g = new TreeNode(9);
    // TreeNode *h = new TreeNode(0);
    // TreeNode *i = new TreeNode(13);
    // a->left = b;
    // b->left = c;
    // b->right = d;
    // d->left = e;
    // d->right = f;
    // a->right = g;
    // g->right = h;
    // h->left = i;
    // displayleft(a);
    // displayleaf(a);
    // displayright(a->right);
    int x=INT_MIN;
    int arr[]={1,2,3,4,5,x,6,7,8,x,9,10,x,11,x,12,x,13,x,14,15,16,x,17,18,x,19,x,x,x,20,21,22,23,x,24,25,26,29,x,x,28,x,x};
    int n=sizeof(arr)/sizeof(arr[0]);
    TreeNode* root=constructTreeLevelWise(arr,n);
    
    displayleft(root);
   // displayleaf(root);
  //   displayright(root->right);
}