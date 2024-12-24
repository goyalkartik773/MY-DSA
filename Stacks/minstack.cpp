#include <iostream>
#include <stack>
using namespace std;
class MinStack
{
public:
    stack<int> st; // har object jo iss class ka banega uss ke pass khud ka stack hoga
                   // Method 2  space complexity O(N) but timecomplexity is O(1);
                   // stack<int> helper; // har baar ye naya stack banega hi; this stack will store min value of each top element present in the stack
    long min = INT_MAX;
    MinStack()
    {
    }

    void push(int val)
    {
        long x = (long)val; // typecast from int to long so that we can handle big value case;
        if (st.size() == 0)
        {   
            st.push(x);
            min = x;
            
        }
        else
        {
            if (x >= min)
            {
                st.push(x);
            }
            else
            {
                st.push(2 * x - min); // fargi value as a check flag daal di stack ke andar
                min = x;              // min ko update kardiya
            }
        }

        // if (st.size() == 0)
        // {
        //     min = val;
        //     helper.push(min);
        //     st.push(val);
        // }
        // else
        // {
        //     if (min > val)
        //         min = val;
        //     helper.push(min);
        //     st.push(val);
        // }
    }

    void pop()
    {
        if (st.top() >= min)
        {
            st.pop();
        }
        else
        {
            // minimum pahela restore karna chate hai;
            int old = 2 * min - st.top();
            min = old;
            st.pop();
        }
        // st.pop();
        // helper.pop();
    }

    int top()
    {   long a=st.top();
        if (a >= min)
            return (int)a;
        else
            return (int)min;
        // return st.top();
    }

    int getMin()
    {

        return (int)min;
        // method -- 3 time and space complexity will be O(1);

        // method--2

        // return helper.top();
        // Method--1

        //  time and space complexity of this method is O(n);
        //  stack<int>helper;
        //  int min=INT_MAX;
        //  while(st.size()!=0) // helper stack har bar banega jitni baar get min call hoga main stack sai  jab value helper stack mai dalunga to apne min ko dhyan sai dekhuga update karduga fhir helper sai mainstack mai value wapis daal dunga
        //  {
        //      if(min>st.top())
        //      min=st.top();
        //      helper.push(st.top());
        //      st.pop();
        //  }
        //  while(helper.size()!=0)
        //  {
        //      st.push(helper.top());
        //      helper.pop();
        //  }
        //  return min;
    }
};
int main()
{
    MinStack *ptr = new MinStack();
    ptr->push(-2);
    ptr->push(0);
    ptr->push(-3);
    cout << ptr->getMin() << " ";
    ptr->pop();
    cout << ptr->top() << " ";
    cout << ptr->getMin();
}