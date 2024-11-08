#include <bits/stdc++.h>
using namespace std;

struct mystack
{
    int *arr;  // pointer which is use for dynamic memory allocation
    int cap;   // capacity
    int top;
    mystack(int c) // in construcutre we take capacity as input
    {
        cap=c;
        arr=new int [cap];  // dynamicallly allocate memory 
        top=-1;
    }
    void push(int x)
    {
        // if(top== cap-1) {...}
        top++;
        arr[top]=x;
    }
    int pop()
    {
        //if (top== -1){...}
        int res=arr[top];
        top--;
        return res;
    }
    int peek()
    {
        // if (top== -1){ ... }
        return arr[top];
    }
    int size()
    {
        return (top+1);
    }
    bool isempty()
    {
        return (top==-1);
    }

};  // End of Structure mystack

int main()
{
    mystack s(5);
    s.push(5);
    s.push(10);
    s.push(20);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isempty()<<endl;
    return 0;
}


// problem with this code (above)
    /*
    1-does not handle overflow and underflow
    2-we need to provide capcity initially , No dynamic resizing.
    */



// dynamcially reziable array

struct MyStack
{
    vector <int> v;
    void push(int x)
    {
        v.push_back(x);
    }
    int pop()
    {
        int res=v.back(); // v.back() give last item of the cecetor
        v.pop_back();
        return res;
    }
    int size()
    {
        return v.size();
    }
    bool isEmpty()
    {
        return v.empty();
    }
    int peek()
    {
        return v.back();   // see .back() function
    }

};