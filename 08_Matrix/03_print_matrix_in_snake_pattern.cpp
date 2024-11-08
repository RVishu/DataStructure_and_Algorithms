#include <bits/stdc++.h>
using namespace std;

int const R=4;
int const C=4;
void printSnake(int mat[R][C])
{
    for(int i=0;i<R;i++)
    {
        if(i%2==0)  //ROW : 0,2
        for(int j=0;j<C;j++)
            cout<<mat[i][j]+" ";
    
    else
    {
        for(int j=C-1;j>=0;j--) //ROW : 1,3
            cout<<mat[i][j]+" ";
    }
    }
}
// theta(R*C)