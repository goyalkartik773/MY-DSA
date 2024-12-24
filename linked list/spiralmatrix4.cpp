#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int x) : val(x), next(NULL)
    {
    }
};
vector<vector<int>> spiralMatrix(int m, int n, Node *head)
{
    vector<vector<int>> arr(m, vector<int>(n, -1)); // m rows hai or n columns hai intially sabki value -1 hai
    int minrow = 0;
    int maxrow = m-1;
    int mincol = 0;
    int maxcol = n-1 ;
    while (minrow <= maxrow && mincol <= maxcol && head != NULL)
    {
        for (int j = mincol; j <= maxcol; j++)
        {    if(head==NULL)
              return arr;
            arr[minrow][j] = head->val;
            head = head->next;
        }
        minrow++;
        for (int i = minrow; i <= maxrow && head != NULL; i++)
        {    if(head==NULL)
              return arr;
            arr[i][maxcol] = head->val;
            head = head->next;
        }
        maxcol--;
        for (int j = maxcol; j >= mincol && head != NULL; j--)
        {    if(head==NULL)
              return arr;
            arr[maxrow][j] = head->val;
            head = head->next;
        }
        maxrow--;
        for (int i = maxrow; i >= minrow && head != NULL; i--)
        {    if(head==NULL)
            return arr;
            arr[i][mincol] = head->val;
            head = head->next;
        }
        mincol++;
    }
    return arr;
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main()
{
    // 3,0,2,6,8,1,7,9,4,2,5,5,0
    Node *a = new Node(3);
    Node *b = new Node(0);
    Node *c = new Node(2);
    Node *d = new Node(6);
    Node *e = new Node(8);
    Node *f = new Node(1);
    Node *g = new Node(7);
    Node *h = new Node(9);
    Node *i = new Node(4);
    Node *j = new Node(2);
    Node *k = new Node(5);
    Node *l = new Node(5);
    Node *m = new Node(0);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;
    h->next = i;
    i->next = j;
    j->next = k;
    k->next = l;
    l->next=m;
    display(a);
    cout<<endl;
    vector<vector<int>> v = spiralMatrix(3, 5, a);
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}