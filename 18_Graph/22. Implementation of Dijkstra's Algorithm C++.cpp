 /*
 Assuming Adjacency Matrix Reperesntation
 Vertex no. 0 to V-1
 */

#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(vector<int> graph[],int v,int src)  // theta(V2)
{
   vector<int> dist(v,INT_MAX); // declaration of distance 

    dist[src]=0;

    vector<bool> fin(v,false); // finalized , initalizing alll element as false


    //we pick min. distance value from NOn finalized
    for(int count=0;count<v-1;count++)
    {
        int u=-1;
        for(int i=0;i<v;i++)            // using min heap to find min.  O(logV)
            if(!fin[i] && (u==-1 || dist[i]<dist[u]))
              {  u=i;fin[i]=true;}
                

        for(int V=0;V<v;V++)   // using adjacency list  // theta(K)
            if(graph[u][v]!=0 && fin[v]==false)
                dist[v]=min(dist[v],dist[u]+graph[u][v]);   // if we reduce it will take O(logV) -> min heap

    }
    return dist;
}

/*
1 O(logV) ==> O(VlogV) 

2- O((V+E)*logV)   , logV here for min operation used

*/