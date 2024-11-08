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

/*

method 1- 
    1- create an empty hash set ,hs
    2- transverse the first list and put all of its nodes into the hs.-  O(m) and O(m)
    3-transverse the second list and look for every node in hs. as soon as we find a node present in hs , we return value of h
        O(n) 
        O(m+n) time comple, and O(m) auxiliary space
*/   

/*
Method 2- O(m+n) and O(1).

1- count nodes in both the lists, let counts be c1 and c2.
2-transverse the bigger list abs(c1-c2).
3-transverse both the lists symultaneously until we see common node.


while (curr1 !=NULL && curr2 !=NULL)
{
    if(curr1 ==curr2)
        return (curr1->data)
        curr1=curr1->next;
        curr2=curr2->next;
}


*/