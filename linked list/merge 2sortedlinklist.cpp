#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int x) : val(x), next(NULL) {}
};
Node *mergeTwoLists(Node *heada, Node *headb)
{
    //  method 1 isme space complexity bahut jada hai ek nayi linkedlist bannai pad rahi hai

    // if (heada == NULL && headb == NULL)
    // {
    //     return NULL;
    // }
    // Node *c = new Node(-1); // ek fargin node bnaya kuch bhi value de sakte ho isme ye linked list c jo banegi uski head position ko maintain karke rakhega
    // Node *tempc = c;
    // while (heada != NULL && headb != NULL)
    // {
    //     if (heada->val <= headb->val)
    //     {
    //         Node *t = new Node(heada->val); // choti value ko lekar ek naya node banao or usse c linkedlist sai connect karte jao
    //         tempc->next = t;
    //         tempc = tempc->next;
    //         heada = heada->next;
    //     }
    //     else // heada->val>headb->val;
    //     {
    //         Node *t = new Node(headb->val); // choti value ko lekar ek naya node banao or usse c linkedlist sai connect karte jao
    //         tempc->next = t;
    //         tempc = tempc->next;
    //         headb = headb->next;
    //     }
    // }
    // if (heada == NULL)
    //     tempc->next = headb;
    // else // headb==NULL
    //     tempc->next = heada;
    // return c->next;

    // method2 dono linked list ko tod fod kar ek hi linked list bna dega
    if(heada==NULL&&headb==NULL)
    {
        return NULL;
    }
    Node*c=new Node(-1);
    Node*tempc=c;
    while(heada!=NULL&&headb!=NULL)
    {
        if(heada->val<=headb->val)
        {
            tempc->next=heada;
            tempc=tempc->next;
            heada=heada->next;
        }
        else
        {
            tempc->next=headb;
            tempc=tempc->next;
            headb=headb->next;
        }
    }
    if(heada==NULL)
    tempc->next=headb;
    else
    tempc->next=heada;
    return c->next;
}
int main()
{
     // do list banakar merge sort karke dekh lena
}