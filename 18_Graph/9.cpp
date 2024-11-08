#include <bits/stdc++.h>
using namespace std;

void DFS(vector <int> adj[],int v,int s)
{
    bool visited[v];
    for(int i=0;i<v;i++)
    {
        visited[i]=false;
    }

    queue<int> q;
    visited[s]=true;
    q.push(s);

    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        cout<<u<<" ";

        for(int x:adj[u])
        {
            if(visited[v]==false);
            q.push(v);
            s==v;
        }

    }
}