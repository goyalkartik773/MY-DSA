#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int countStudents(vector<int> &students, vector<int> &sandwiches)
{
    // students wale vector ko pahela ek queue mai store kar deta hai;
    queue<int> q;
    for (int i = 0; i < students.size(); i++)
    {
        q.push(students[i]);
    }
    int ptr = 0;
    int count = 0;
    while (count != q.size())
    {
        if (q.front() == sandwiches[ptr])
        {
            count = 0;
            ptr++;
            q.pop();
        }
        else
        {
            q.push(q.front());
            q.pop();
            count++;
        }
    }
    return count;
}
int main()
{
    vector<int> student{1,1,1,0,0,1};
    vector<int> sandwiches{1,0,0,0,1,1};
    cout<<countStudents(student,sandwiches);
}