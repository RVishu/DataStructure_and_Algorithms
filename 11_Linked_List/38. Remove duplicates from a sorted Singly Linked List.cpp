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



void removeDups(node *head)
{
    node *curr=head;
    while(curr!=NULL && curr->next!=NULL) // --IMP
    {
        if(curr->data==curr->next->data)
        {
            node *temp=curr->next;
            curr->next=curr->next->next;
            delete(temp);
        }
        else         
        curr=curr->next;
    }
}






//MINE -> SOME MISTAKE THERE

// void removeDups(node *head)
// {
//     node *curr=head;
//     while(curr!=NULL && curr->next!=NULL) // --IMP
//     {
//         if(curr->data==curr->next->data)
//         {
//             node *temp=curr->next;
//             curr->next=curr->next->next;
//             delete(temp);

//             if(curr->data!=curr->next->data)   // NO NEED TO ADD THIS CONDITION , ALREADY PERFECT
//             {curr=curr->next;}          // THIS ALSO
//         }
//         else
//         curr=curr->next;
//     }
// }