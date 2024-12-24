#include <iostream>
#include <queue>
using namespace std;
string predictPartyVictory(string str)
{
    if (str.size() == 1)
    {
        if (str[0] == 'D')
            return "Dire";
        else
            return "Radiant";
    }
    queue<int> q;
    queue<int> r;
    queue<int> d;
    for (int i = 0; i < str.size(); i++)
    {
        q.push(i);
        if (str[i] == 'R')
            r.push(i);
        else
            d.push(i);
    }
    while (q.size()>1)
    {

        if (str[q.front()] == 'X')
            q.pop();
        else if (str[q.front()] == 'R')
        {
            if (d.size() == 0)
                return "Radiant";
                else{
            str[d.front()] = 'X';
            d.pop();
            r.push(r.front());
            r.pop();
             q.push(q.front());
        q.pop();
                }
        }
        else
        {
            if (r.size() == 0)
                return "Dire";
            else{
            str[r.front()] = 'X';
            r.pop();
            d.push(d.front());
            d.pop();
             q.push(q.front());
        q.pop();}
        }
       
    }
    if (q.front() == 'R')
        return "Radiant";
    else
        return "Dire";
}
int main()
{
    cout << predictPartyVictory("RRDDD");
}