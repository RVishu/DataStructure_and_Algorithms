#include <bits/stdc++.h>
using namespace std;

// int main()   // CONCEPT REVERSE OF A NUMBER THEN EQUATE TO GIVEN NUMBER
// {   
//     int n,x;
//     int num =0;
//     cin>>n;
//     int m=n;
//     while(n>0)
//     {
//         x=n%10;
//         n=n/10;
//         num = num*10+x;
//     }
//     if(num==m){
//         cout<<"YES"<<endl;
//     }else{
//         cout<<"NO"<<endl;
//     }
    
//     return 0;
// }

bool isPal(int n)
{
    int rev=0;
    int temp=n;
    while (temp!=0)
    {
        int ld=temp%10;
        rev = rev*10+ld;
        temp == temp/10;

    }
    return (rev==n);
    
}

int main()
{
    int n;
    cin>>n;
    
    cout<<isPal(n); // why time limit  is excc=eeded;
    return 0;
}