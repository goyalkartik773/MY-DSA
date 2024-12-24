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
Node *mergesort(Node *heada, Node *headb)
{
    if (heada == NULL && headb == NULL)
        return NULL;
    Node *c = new Node(-1);
    Node *tempc = c;
    while (heada != NULL && headb != NULL)
    {
        if (heada->val <= headb->val)
        {
            tempc->next = heada;
            tempc = tempc->next;
            heada = heada->next;
        }
        else
        {
            tempc->next = headb;
            tempc = tempc->next;
            headb = headb->next;
        }
    }
    if (heada == NULL)
        tempc->next = headb;
    else
        tempc->next = heada;
    return c->next;
}
Node *mergeKLists(vector<Node *> &arr)
{ // method 1 time complexity is O(n*k^2);
  // if(arr.size()==0)
  // return NULL;
  // while(arr.size()>1)
  // {
  //     Node*a=arr[arr.size()-1]; // last node array sa extract kar lena
  //     arr.pop_back();           // extract karne ke badd array sai last node remove kar dena taki size kam ho jaye array ka
  //     Node*b=arr[arr.size()-1];
  //     arr.pop_back();
  //     Node*c=mergesort(a,b);  // dono list ko merge karke ek list mai le ayega
  //     arr.push_back(c);  // fhir akhri mai push_back() kardena taki wo a mai chal jaya or b node sai fhir merge ho jaye
  // }
  // return arr[0];
  // method 2 time complexity is O(nlogbase2 n);
    if (arr.size() == 0)
        return NULL;
    while (arr.size() > 1)
    {
        Node *a = arr[0]; // last node array sa extract kar lena
        arr.erase(arr.begin());                // extract karne ke badd array sai last node remove kar dena taki size kam ho jaye array ka
        Node *b = arr[0];
        arr.erase(arr.begin());
        Node *c = mergesort(a, b); // dono list ko merge karke ek list mai le ayega
        arr.push_back(c);          // fhir akhri mai push_back() kardena taki wo a mai chal jaya or b node sai fhir merge ho jaye
    }
    return arr[0];
}
int main()
{
    // vector of list banakar upper wale function mai bhejkar check bhi karlena chae to
}