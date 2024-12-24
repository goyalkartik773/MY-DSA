#include <iostream>
using namespace std;
// Har node ka pass do attribute hoge ek datavalue or ke hoga agli node ka address jo pointer mai store hoga
class Node
{
public:
    int val;
    Node *next; // ye next node ka address store karega
    Node()      // default constructor jaise hi koi bhi node bane to usme by default next node ka address Null pointer ho
    {
        next = NULL;
    }
    Node(int val) // parametrised constructor to intialise the value of node
    {
        this->val = val;
    }
};
int main()
{
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // abhi tak kisi bhi node ko humne ek doosra node sai link nahi kiya hai
    a.next = &b;
    b.next = &c;
    c.next = &d;
    // abb maine sari nodes ko aapas mai link kardiya hai

    //(*(a.next)).val;  b ki value print kari a sai
    //(*((*(a.next)).next)).val;  a ki value sai  print c
    //(*(*(*(a.next)).next).next).val;   extracting value from address of d by a
    // using pointer approach
    // cout<<a.next->val; b value;
    // cout<<a.next->next->val; c ki value;
    // cout<<a.next->next->next->val;  d ki value;
    Node temp;
    temp = a;
    while (temp.next != NULL)
    {
        cout << temp.val<<" ";
        temp = *temp.next;
    }
}