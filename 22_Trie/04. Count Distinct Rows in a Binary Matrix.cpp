/*

NAIVE:

1- initialize  res =0
2- Traverse all rows one by one 
    a- if current row is NOT same any of the previous 
        rows , do 
            res++;
3- return res;  


time complecityu
    m:rows
    m:columsns

    O(m*m*n)

*/
#include <bits/stdc++.h> 


//

// efficient solution
 

//bool mat[M][N];
/*
struct TrieNode
{
    TrieNode *child[2];
    bool isEnd;
    TrieNode()
    {
       child[0]=NULL;
	   child[1]=NULL;
    }
};

bool insert(TrieNode *root,int row)
{
	TrieNode *curr=root;
	bool flag = false;
	for(int i=0;i<N;i++)
	{
		int index=mat[row][i];
		if(curr->child[index]==NULL)
		{
			curr->child[index]=new TrieNode();
			flag=true;
		}
		curr=curr->child[index];
	}
	return flag;
}

int countDist()
{
	TrieNode *root=new TrieNode();
	int res=0;
	for(int row=0;row<M;row++)
		if(insert(root,row)==true)
			res++;

	return res;		
}

*/