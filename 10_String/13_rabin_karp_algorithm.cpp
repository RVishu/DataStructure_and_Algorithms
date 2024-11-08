//we compute hash value of pattern(which is interger) and hash value of evervy window of text
#include <bits/stdc++.h>
using namespace std;

void rbSearch(string pat,string txt,int m,int n)
{   int q,d;
    int h=1;
    for(int i=1;i<=m-1;i++)
    h=(h*d)%q;

    int p=0,t=0;
    for(int i=0;i<m;i++)
    {
        p=(p*d+pat[i])%q;
        t=(t*d+txt[i])%q;
    }

    for(int i=0;i<=n-m;i++)
    {
        if(p==t)
        {
            bool flag = true;
            for(int j=0;j<m;j++)
                if(txt[i+j]!=pat[j]){flag=false;break;}
                if(flag==true) {cout<<i;}
        }

        if(i<n-m)
        {
            t=((d*(t-txt[i]*h)+txt[i+m]))%q;
            if(t<0) 
            t=t+q;
        }
    }
}
// O((n-m+1)*m)