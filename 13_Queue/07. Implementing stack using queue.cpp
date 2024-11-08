#include <bits/stdc++.h>
#include <c++/3.4.5/bits/stl_queue.h>
using namespace std;


/*
Consider a situtation where we have library available 
for queue and we need stack library.

How to Implement the stack  -> using 2 queue
*/

struct stack
{
    queue <int> q1,q2;
    int top() {return q1.front();}
    int size() {return q1.size();}
    int pop(){return q1.front();}

    void push(int x)
    {
        while(q1.empty()==false)
        {
            q2.push(q1.front());
            q1.pop();

        }
        q1.push(x);
        while(q2.empty()==false)
        {
            q1.push(q2.front());
            q2.pop();
        }
    }

};



//CHAT_GPT solution to the top error
#include <bits/stdc++.h>
#include <c++/3.4.5/bits/stl_queue.h>
using namespace std;

struct stack
{
    queue<int> q1, q2;

    bool empty() { return q1.empty(); }

    int size() { return q1.size(); }

    void push(int x)
    {
        // Move all elements from q1 to q2
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

        // Push the new element to q1
        q1.push(x);

        // Move all elements back from q2 to q1
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }

    void pop()
    {
        if (!q1.empty())
        {
            q1.pop();
        }
        else
        {
            cout << "Stack is empty." << endl;
        }
    }

    int top()
    {
        if (!q1.empty())
        {
            return q1.front();
        }
        return -1; // or throw an exception for an empty stack
    }
};




//

#include <iostream>
#include <queue>

struct Stack {
    std::queue<int> q1, q2;

    bool empty() {
        return q1.empty() && q2.empty();
    }

    int size() {
        return q1.size() + q2.size();
    }

    void push(int x) {
        q1.push(x);
    }

    int pop() {
        if (empty()) {
            std::cerr << "Stack is empty!" << std::endl;
            return -1; // Return some default value or handle error accordingly
        }

        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        int topElement = q1.front();
        q1.pop();

        std::swap(q1, q2);
        return topElement;
    }

    int top() {
        if (empty()) {
            std::cerr << "Stack is empty!" << std::endl;
            return -1; // Return some default value or handle error accordingly
        }

        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        int topElement = q1.front();
        q2.push(topElement);

        std::swap(q1, q2);
        return topElement;
    }
};

int main() {
    Stack myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    std::cout << "Top element: " << myStack.top() << std::endl;
    myStack.pop();
    std::cout << "Top element after pop: " << myStack.top() << std::endl;

    return 0;
}

// MORE VARIATION --> SEE VIDEO

/*
1- implement stack using queue by making pop operation costly
2- implement stack using only one queue (we use recursion call stack here)
3- implement queue using stack
    1-by making enque() operation costly
    2-by making Deque() operation costly
    3-by using one stack(and one recursion call stack)
*/