#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int x) : val(x), next(NULL) {}
};
Node *reverselist(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *nex = head;
    while (curr != NULL)
    {
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    return prev;
}
Node *reversepart(Node *head, int left, int right)
{
    Node *temp = head;
    Node *a = NULL;
    Node *b = NULL;
    Node *c = NULL;
    Node *d = NULL;
    int n = 1;
    while (temp != NULL)
    {
        if (n == left - 1)
            a = temp;
        else if (n == left)
            b = temp;
        else if (n == right)
            c = temp;
        else if (n == right + 1)
            d = temp;
        n++;
        temp = temp->next;
    }
    if (a != NULL)
        a->next = NULL;
    if (c != NULL)
        c->next = NULL;
    c = reverselist(b);
    if (a != NULL)
        a->next = c;
    b->next = d;
    if (a != NULL)
        return head;
    else
        return c;
}
Node *reverseEvenLengthGroups(Node *head)
{
    Node *temp = head;
    int gap = 1;
    while (temp != NULL && temp->next != NULL)
    {
        // find the length of each group and check whether it is equal to or not to grp
        Node *t = temp->next;
        int remlen = 0;
        for (int i = 0; i < gap + 1 && t != NULL; i++)
        {
            remlen++;
            t = t->next;
        }
        if (remlen < gap + 1)
            gap = remlen - 1; // akhri grp mai gap ki value  change ho sakti thi abb last grp ke liye bhi gap sahi hoga
        if (gap % 2 != 0)
        {
            reversepart(temp, 2, gap + 2);
        }
        gap++;
        for (int i = 0; temp != NULL && i < gap; i++)
        {
            temp = temp->next;
        }
    }
}
int main()
{
    
}