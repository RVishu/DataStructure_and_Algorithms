#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int a,b,c;
      cin>>a>>b>>c;

        if(c%2==0)
        {
            if(b>=a)
            {
                 cout<<"second"<<endl;
            }         
            else 
           {
             cout<<"first"<<endl;
           }

        }
        else
        {
            if(a>=b)
            {
                cout<<"first"<<endl;
            }
            else
            {
                cout<<"second"<<endl;
            }
        }

    }
  return 0; 
}
