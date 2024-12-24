#include <iostream>
#include <queue>
using namespace std;
void display(queue<int> q)
{
    int idx = 0;
    while (idx != q.size())
    {
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
        idx++;
    }
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    display(q);
}