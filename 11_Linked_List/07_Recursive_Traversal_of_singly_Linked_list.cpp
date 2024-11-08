#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
      data =x;
        next = NULL;
    }
};

void rPrint(node *head)
{
    if(head==NULL)
    return;
    cout<<(head->data)<<" ";
    rPrint(head->next);
}

//time complexity O(n) and O(n);