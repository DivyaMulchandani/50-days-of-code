// two stacks using array

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

class twoStacks
{
    int *arr, size, top1, top2;

public:
    twoStacks(int n)
    {
        size = n;
        arr = new int[n];
        top1 = n / 2 + 1;
        top2 = n / 2;
    }
    void push1(int x)
    {
        if (top1 > 0)
        {
            arr[top1] = x;
            top1--;
        }
        else
        {
            cout << "Stack Overflow: Cannot push " << x << " onto stack1" << endl;
            return;
        }
    }
    void push2(int x)
    {
        if (top2 < size - 1)
        {
            arr[top2] = x;
            top2++;
        }
        else
        {
            cout << "Stack Overflow: Cannot push " << x << " onto stack2" << endl;
            return;
        }
    }
    int pop1()
    {
        if (top1 < size / 2)
        {
            top1++;
            return arr[top1];
        }
        else
        {
            cout << "Stack Underflow: Stack1 is empty" << endl;
            return -1;
        }
    }
    int pop2()
    {
        if (top2 >= size / 2 + 1)
        {
            top2++;
            return arr[top2];
        }
        else
        {
            cout << "Stack Underflow: Stack2 is empty" << endl;
            return -1;
        }
    }
};

int main()
{
    twoStacks ts(5);
    ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(20);
    ts.push2(25);
    cout << "Popped element from stack1 is "
         << ": " << ts.pop1() << endl;
    ts.push2(40);
    cout << "Popped element from stack2 is "
         << ": " << ts.pop2() << endl;
    return 0;
}