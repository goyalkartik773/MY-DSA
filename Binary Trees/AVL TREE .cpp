#include<iostream>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    int height; // every node will have height;
    TreeNode(int val)
    {
        this->val=val;
        left=right=NULL;
        height = 1; // new node ki height to 1 hi hogi starting mai
    }
};
int getheight(TreeNode* root)
{
    if(root==NULL)
        return 0;
    return root->height;
}
TreeNode* rightrotation(TreeNode* root)
{
    TreeNode* child = root->left;
    // save the node of child right
    TreeNode* childright = child->right;
    child->right = root;
    root->left = childright;

    // update the height of child and root node means dono ki height ko dobara calculate karlo inka childs hi change hua hai

    root->height  = 1 + max(getheight(root->left),getheight(root->right));
    child->height = 1 + max(getheight(child->left),getheight(child->right));

    // child node ko return karna kyuki root ke uppar jo connections tha abb wo root node ke sath karne hai
    return child;
}
TreeNode* leftrotation(TreeNode* root)
{
    TreeNode* child = root->right;
    TreeNode* leftchild = root->left;

    child->left = root;
    root->right = leftchild;


    // update the height of child and root node means dono ki height ko dobara calculate karlo inka childs hi change hua hai

    root->height  = 1 + max(getheight(root->left),getheight(root->right));
    child->height = 1 + max(getheight(child->left),getheight(child->right));

    // child node ko return karna kyuki root ke uppar jo connections tha abb wo root node ke sath karne hai
    return child;
}

int getbalance(TreeNode* root)
{
    return getheight(root->left) - getheight(root->right);
}
TreeNode* built_avl(TreeNode* root,int key)
{
    if(root==NULL)
        return new TreeNode(key);

    if(root->val>key) // left insertion
        root->left = built_avl(root->left,key);
    else if(root->val< key) //right insertion
        root->right = built_avl(root->right,key);
    else // duplicate elements mai koi insertion nahi karega
        return root;
    // update the height of each node

    root->height = 1 + max(getheight(root->left),getheight(root->right));

    // check balancing of each node

    int balance_factor = getbalance(root);

    // case 1 left
    if(balance_factor > 1)
    {
        if(getbalance(root->left)>=0) // ll
        {
            return rightrotation(root);
        }
        else // lr
        {
            root->left = leftrotation(root);
            return rightrotation(root);
        }
    }
    // case 2 right
    else if(balance_factor < -1 )
    {
        if(getbalance(root->right)<=0) // rr
        return leftrotation(root);
        else //rl
        {
            root->right = rightrotation(root);
            return leftrotation(root->left);
        }
    }
   /* // case 3 left right rotation
    if(balance_factor > 1 && root->left->val < key)
    {
        root->left = leftrotation(root->left);
        return rightrotation(root);
    }
    // case 4 right left rotation
    if(balance_factor < -1 && root->right->val > key)
    {
        root->right = rightrotation(root->right);
        return leftrotation(root);
    }
    */
    // no balancing is required
    else
    return root;
}
void preorder(TreeNode* root)
{
    if(root==NULL)
        return ;
    cout<<root->val<<" ";
    preorder(root->left);

    preorder(root->right);
}
void inorder(TreeNode* root)
{
    if(root==NULL)
        return ;

    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
TreeNode* find_sucessor(TreeNode* root)
{
    TreeNode* temp = root->right;
    while(temp->left!=NULL)
    temp=temp->left;
    return temp;
}
TreeNode* delete_avl(TreeNode* root,int target)
{
    if(root==NULL)
    return NULL;

    if(root->val == target)
    {
        // case1 when target node is leaf node
        if(root->left==NULL && root->right==NULL)
        {
            return NULL;
        }
        // case 2 when target node is having one child
        if(root->left==NULL || root->right==NULL)
        {
            if(root->left!=NULL)
                return root->left;
            else
                return root->right;
        }
        // case 3 target node is having two child
        if(root->left!=NULL && root->right != NULL)
        {
            TreeNode* succ = find_sucessor(root);
            root->val=succ->val;
            root->right=delete_avl(root->right,succ->val);
            return root;
        }
    }
    if(root->val > target)  // left tree sai delete karna hai
    {
        root->left = delete_avl(root->left,target);
    }
    else if(root->val < target)// right node sai delete karna hai
    {
        root->right = delete_avl(root->right,target);
    }
    // node ko delete karne ke baad direct tree return nahi karna abb
    // now after deleting the node tree ki height ko to update karo
    root->height = 1+max(getheight(root->left),getheight(root->right));

    // check balancing of the tree;
    int balance = getbalance(root);
    if(balance > 1) // case of ll or lr
    {
        if(getbalance(root->left)>=0) // case of ll
        {
            // right rotation ko perform karega
            return rightrotation(root);
        }
        else // case of lr
        {
            root->left = leftrotation(root->left);
            return rightrotation(root);
        }
    }
    else if(balance < -1) // case of rr or lr
    {
        if(getbalance(root->right)<=0) // case of rr
        return leftrotation(root);
        else // case of r l
        {
            root->right = rightrotation(root->right);
            return leftrotation(root->left);
        }
    }
    else // balance is 0
    {
        // no rotation is required
        return root;
    }
}
int main()
{
    TreeNode* root=NULL;
    root = built_avl(root,10);
    root = built_avl(root,20);
    root = built_avl(root,30);
    root = built_avl(root,50);
    root = built_avl(root,70);
    root = built_avl(root,5);
    root = built_avl(root,100);
    root = built_avl(root,95);
   // cout<<"preorder : "<<endl;
   // preorder(root);
    cout<<"inorder : "<<endl;
    inorder(root);
    /*
    root=delete_avl(root,5);
    cout<<"\n new inorder : "<<endl;
    inorder(root);*/



}
