#include <iostream>
#include<queue>
using namespace std;
int main()
{   // queue is fifo lineardatastructure 
    queue<int> q;
    q.push(10);     // push() humesha back sai hoga or front pai pahuch jayega pahela element
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.front()<<endl;  // front() humesha top ki tarah first sai element fetch karega
    q.pop(); // pop() humesha top sai hi element ko remove karega
    cout<<q.front()<<endl;
    cout<<q.back(); // will fetch the value from the back of the queue;
}