#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void display(queue<int> &q)
{
    int idx = 0;
    while (idx != q.size())
    {
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
        idx++;
    }
    cout << endl;
}
void change(queue<int> &q)
{
    int idx=q.size()-1;
    while (idx >= 0)
    {
        if (idx % 2 == 0)
            q.pop();
        else
        {
            q.push(q.front());
            q.pop();
        }
        idx--;
    }
}
int main()
{
    queue<int> q;
    q.push(5);
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);
    q.push(0);
    display(q);
    change(q);
    display(q);
}