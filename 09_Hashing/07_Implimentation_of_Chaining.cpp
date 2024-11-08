// Structure in C++

#include <bits/stdc++.h>
using namespace std;
// double linked list by list<int> *table
struct MyHash
{
    int BUCKET;
    list <int> *table;
    MyHash(int b)
    {
        BUCKET=b;
        table = new list<int>[b];
    }
    void insert(int key)
    {
        int i=key%BUCKET;
        table[i].push_back(key);
    }
    void remove(int key)
    {
        int i=key%BUCKET;
        table[i].remove(key); // remove(key) is function to remove from linked list
    }
    bool search (int key)
    {
        int i=key%BUCKET;
        for(auto x:table[i]) // traversed through Linked List
            if(x==key)
                return true;
            return false;    
    }

};