#include <bits/stdc++.h>
using namespace std;
/*
int maxConsecutiveOnes(bool arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int curr=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]==1)
            {
                curr++;
                
            }
            else break;
            
        }
        res =max(res,curr);

    }
    return res;
}
*/
//EFFIECIENT SOLUTIONN, O(n) & O(1);

int maxConsecutiveOnes(bool arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int curr=0;;

        if(arr[i]==0)
        curr=0;
        else 
        {
            curr++;
            res=max(res,curr);

        }

    }
    return res;

}