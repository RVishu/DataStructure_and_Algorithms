#include <bits/stdc++.h>
using namespace std;
/*
int LargestEle(vector <int> v)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>v[i+1])
        {
            swap(v[i],v[i+1]);
        }
        else
        {
            swap(v[i+1],v[i+2]);
        }

        return v[i];
    }
    
    
}

int main()
{
    vector <int > v;
    for(int i=0;i<v.size();i++)
    {
        v.push_back(i);
    }
   cout<<LargestEle(v)<<endl;
}
*/


/*

//Naive Solution     O(n^2)
int getLargest(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag = true;
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                flag = false;
                break;
            }
        }
        if(flag==true)
        return i;
    }
    return -1;
}

int main()
{
    int arr[]={5,8,20,10};
    cout<<getLargest(arr,4);
    return 0;
}
*/

//Solution of O(n);   MINE

/*
int Largest(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int max = arr[0];
        max = max_element(max,arr[i]);
        return i;
    }

    return -1;
}

int main()
{
    int arr[]={5,8,20,10};
    cout<<Largest(arr,4);
    return 0;
}

*/

// sir solution
int getLargest(int arr[],int n)
{
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[res])
        {
        res=i;
        }
    }
    return res;
}

int main()
{
    int arr[]={5,8,20,100};
    cout<<getLargest(arr,4);
    return 0;
}
