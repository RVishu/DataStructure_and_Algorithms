#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node (int x)
    {
        data =x;
        next=NULL;
    }
};
//Iterative
int Search_LL(node *head,int x)
{
    int pos =1;
    node *curr = head;
    while(curr!=NULL)
    {
        if(curr->data==x)
        return pos;
        else
        {
            pos++;
            curr =curr->next;
        }
    }
    return -1;
}
// O(n) and O(1)

//Recursiv
int Search_LL_Recursive(node *head,int x)
{
   
    {
        if(head->data==x)
        return 1;
        else
        {

           int res= Search_LL_Recursive(head->next,x);
           if(res==-1) return -1;
           else return (res+1);
        }
    }
    return -1;
}

// O(n) and O(n);   

//linked list doesn't allow binary search to be implemented in O(logn)
// bcz we can't find MIDDLE NODE in O(1) time.