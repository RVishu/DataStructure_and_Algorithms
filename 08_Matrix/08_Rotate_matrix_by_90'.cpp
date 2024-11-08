#include <bits/stdc++.h>
using namespace std;

/*
NAIVE SOLUTION
-> Last column becomes first row;
-> Second Last Column Becomes second row

- theta(n^2) and theta(n^2);

*/

int const r=4,c=4,n=4;
void rotate_90(int mat[r][c])
{
   
    int temp[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            temp[n-j-1][i]=mat[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            mat[i][j]=temp[i][j];     
}

/*
EFFICIENT SOLUTION-> IN PLACE
-> find transpose of matrix
-> revverse individual columns

- theta(n^2) and theta(1);

*/

int const n=4;
void Rotate(int mat[n][n])
{
    
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            swap(mat[i][j],mat[j][i]);

    for(int i=0;i<n;i++)
    {
        int low=0,high=n-1;
        while(low<high)
        {
            swap(mat[low][i],mat[high][i]);
            low++;
            high--;
        }
    }
}
