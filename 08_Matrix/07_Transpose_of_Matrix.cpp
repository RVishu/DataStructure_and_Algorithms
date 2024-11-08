#include <bits/stdc++.h>
using namespace std;

//NAIVE SOLUTION

/*
int const n=4;
void transpose(int mat[n][n])
{
    int temp[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            temp[i][j]=mat[j][i];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            mat[i][j]=temp[i][j];
}
*/

// think of an approach that does'nt require temproary array;
// we do it in place , and 1 traversal only , without any Auxiliary Array


//EFFFICIENT SOLUTION

int const n=4;
void transpose(int mat[n][n])
{
    
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            swap(mat[i][j],mat[j][i]);
 cout<<mat[n][n];
}
