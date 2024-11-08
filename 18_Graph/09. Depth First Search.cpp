/*

DFS is Recursive in Nature  
first we call for 1 adjacent then it recursively call for its adjace 
 and when that finishes , we call for other adjacent
*/
#include <bits/stdc++.h>
using namespace std;

void DFSRec(vector<int> adj[],int s,bool visited[])  // second this   
{
    visited[s]=true;
    cout<<s<<" ";

    for(int u:adj[s])
        if(visited[u]==false)
            DFSRec(adj,u,visited);
}

void DFS(vector<int>adj[],int v,int s)  // first this
{
    bool visited[v];
    for(int i=0;i<v;i++)
        visited[i]=false;
    DFSRec(adj,s,visited);    
}


// DISCONNECTED GRAPH

void DFS(vector<int>adj[],int v,int s)
{
    bool visited[v];
    for(int i=0;i<v;i++)
        visited[i]=false;
    for(int i=0;i<v;i++)
        if(visited[i]==false)
            DFSRec(adj,i,visited);   // this is main line in this CASE
}

// count connnected component in an undirected graph

void DFSRec(vector<int> adj[],int s,bool visited[])
{
    visited[s]=true;
    

    for(int u:adj[s])
    {
        if(visited[u]==false)
            DFSRec(adj,u,visited);
    }
}

int  DFS(vector<int>adj[],int v)
{
    bool visited[v];
    int count =0;
    for(int i=0;i<v;i++)
        visited[i]=false;
    for(int i=0;i<v;i++)    
    {DFSRec(adj,i,visited);  
    count++; } 

    return count++;
}



// O(V+E)