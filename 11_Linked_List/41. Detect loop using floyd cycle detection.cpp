// it doesn;t modified the structure doesn't modified the list take O(n) and O(1)
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};


//floyd cycle detection

/*
ALGORITH

1- initialize slow_p=head ,fast_p=head;
2-move slow_p by one and fast_p by two. if then pointers meet , then there is a loop.

*/

bool isLoop(node *head)
{
    node *slow_p=head,*fast_p=head;
    while(fast_p!=NULL && fast_p->next!=NULL)
    {
        slow_p=slow_p->next;
        fast_p=fast_p->next->next;
        if(slow_p==fast_p)
        return true;
    }
    return false;
}

// O(m+N) ,m+n = length of linked list , aux spsce O(1)