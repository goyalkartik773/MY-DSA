#include <iostream>
using namespace std;
class queue
{
private:
    int arr[5];
    int fr;
    int bk;

public:
    queue()
    {
        fr = 0;
        bk = 0;
    }
    void push(int val)
    {
        if (bk > 5)
        {
            cout << "Array overflow error\n";
            return;
        }
        arr[bk] = val;
        bk++;
    }
    void pop()
    {
        if (bk - fr == 0)
        {
            cout << "UNderflow array error\n";
            return;
        }
        fr++;
    }
    int front()
    {
        if (bk - fr == 0)
        {
            cout << "UNderflow array error\n";
            return -1;
        }
        return arr[fr];
    }
    int back()
    {
        if (bk - fr == 0)
        {
            cout << "UNderflow array error\n";
            return -1;
        }
        return arr[bk - 1];
    }
    int size()
    {  
        return bk - fr;
    }
    void display()
    {
        for (int i = fr; i < bk; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.size();
    cout<<q.back();
     q.pop();
      q.pop();
    q.display();
    cout<<q.size()<<endl;
    cout<<q.front();
    q.pop();
    cout<<q.front();
    cout<<q.size()<<endl;
    q.display();
}