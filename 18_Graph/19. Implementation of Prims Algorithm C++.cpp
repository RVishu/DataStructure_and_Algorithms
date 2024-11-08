/*
given a 2D matrix represent weighted adn directed and connected graph


*/

#include <bits/stdc++.h>
using namespace std;

int primeMST(vector<int> graph[],int V)   // theta(V2)
{
    int key[V],res=0;
    fill(key,key+V,INT_MAX);   // how to fill all values in array or vector
    key[0]=0;
    bool mset[V]={false};

    for(int count=0;count<V;count++)
    {
        int u=-1;  // we can extract min heap with O(logV)
        for(int i=0;i<V;i++)
            if(!mset[i] && (u==-1 || key[i]<key[u]))
                u=i;

        mset[u]=true;
        res=res+key[u];

        for(int v=0;v<V;v++)  // this will also O(logV)
        {
            if(graph[u][v]!=0 && !mset[v])
                key[v]=min(key[v],graph[u][v]);
        }   
        return res;     
    }

}
/*
if we have adjacency list and using min heap then
    - O(VlogV)+O((V+E)logV) == O((V+E)logV)

    for connected graph V=O(E )

*/