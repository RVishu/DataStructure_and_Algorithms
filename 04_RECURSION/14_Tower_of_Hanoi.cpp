#include <bits/stdc++.h>
using namespace std;

void TOH(int n,char A,char B,char C)
{
    if(n==1)
    {
        cout<<"move 1 from" << A <<"to" <<C<<endl;
        return;
    } 
    TOH(n-1,A,C,B);
    cout<<"Move"<<n<<"from"<<A<<"to"<<C<<endl;
    TOH(n-1,B,A,C);
}

// int main()
// {
//     int n;
//     cin>>n;
//     char A,C,B;

//     cout<<TOH(n,'A','B','C');
// }