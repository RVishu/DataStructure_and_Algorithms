#include <bits/stdc++.h>
using namespace std;


   
        struct node
        {
            int data;
            node *next;
            bool visited;
            node (int d)
            {
                data=d;
                next=NULL;
                visited=false;
            }
        };

/*

method 1- navie O(n2)
method 2 - if modification to linked list structure are allowed O(n)

        struct node{
            int data;
            node *next;
            bool visited;
            node (int d)
            {
                data=d;
                next=NULL;
                visited=false;
            }
        }


method 3- modification to linked list pointer/refrences;        


bool isLoop(node *head)
{
    node *temp = new node;
    node *curr=head;
    while(curr!=NULL)
    {
        if(curr->next==NULL)
            return false;
            if(curr->next==temp)
            return true;

        node *curr_next=curr->next;
        curr->next=temp;
        curr=curr_next;

    }
    return false;
}
*/


// method 4 (hashing)  O(n) and O(n)

// IMP
bool isloop(node *head)
{
    unordered_set<node*> s;

    for (node *curr=head;curr!=NULL;curr=curr->next)
    {
        if(s.find(curr)!=s.end())
        return true;

        s.insert(curr);
    }
    return false;
}




