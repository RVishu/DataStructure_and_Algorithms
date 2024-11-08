/*
FIRST VERSION :
    - Given an undirected graph and a source vertex 's'
        print BFS from the given source


*/

// visited means- this item has been discoverd and added into the queue (not necessary to print it)


#include <bits/stdc++.h>
using namespace std;

void BFS1(vector<int> adj[],int v,int s)
{
    bool visited[v+1];   // why v+1 -> it should be V as in Classroom pdf
    for(int i=0;i<v;i++)
    {
        visited[i]=false;
    }
    queue<int> q;
    visited[s]=true;
    q.push(s);
    while(q.empty()==false)
    {
        int u=q.front();
        q.pop();
        cout<<u<<" ";

        for(int v:adj[u])
        {
            if(visited[v]==false)
            {
                visited[v]=true;
                q.push(v); 
            }
        }
    }
}


/*
SECOND VERSION :
    - No source Given and graph may be disconnected
    
*/

void BFS(vector<int> adj[],int s,bool visited[])  //O(V+E)
{
   
    queue<int> q;
    visited[s]=true;
    q.push(s);
    while(q.empty()==false)
    {
        int u=q.front();
        q.pop();
        cout<<u<<" ";

        for(int v:adj[u])  // adjacent of u -> all elements
        {
            if(visited[v]==false)
            {
                visited[v]=true;
                q.push(v); 
            }
        }
    }
}

void BFS_dis(vector<int> adj[],int v)
{
    bool visited[v+1];
    for(int i=0;i<v;i++)
        visited[i]=false;
    for(int i=0;i<v;i++)
        if(visited[i]==false)
            BFS(adj,i,visited);

}


// Variation  - Counting Connected Component in Undirected Graph

// No. of island - interview question

int BFS_dis_counting(vector<int> adj[],int v)
{
    bool visited[v+1];
    int count =0;
    for(int i=0;i<v;i++)
        visited[i]=false;
    for(int i=0;i<v;i++)
        if(visited[i]==false)
            {
             BFS(adj,i,visited);
             count++;
            }
     return count;       
}
