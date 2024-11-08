#include <bits/stdc++.h>
using namespace std;

// int main()
// {   
//     int n;
//     cin>>n;
//     int temp = n;
//         if(n==0){
//             cout<<n+1<<endl;
//         }
//         else{
    
//         for(int i=1;i<n;i++)   //MINE CODE;
//         {   
//             temp = temp*i;
            
//         }
//         cout<<temp<<endl;
    
//         }
//     return 0;
// }


//WRITE DOWN A FUNNCTION THAT TAKES INPUT VALUE N AND RETURN FACTORIAL OF IT.

// ITERATIVE IMPLEMENTATION;


// int fact(int n)
// {
//     int res=1;
//     for(int i=2;i<=n;i++){    //t.c O(n) & A.s = O(1)
//         res =res*i;
//     }
//     return res;
// }

// int main()
// {
//     int m;
//     cin>>m;

//     cout<<fact(m)<<endl;
// }


// RECURSIVE SOLUTION;

// int fact(int n)
// {
//     int temp =n;
//     int res =1;
//     while(temp>0 )
//     {
//         res =res*temp;  //MINE CODE
//         temp--;
//     }

//     return res;
    
// }
// int main()
// {
//     int m;
//     cin>>m;

//     cout<<fact(m)<<endl;
// }



// recursive solution by sir

int fact(int n)
{
    if(n==0)
    {
        return 1;

    }

    return n*fact(n-1);
}

int main()
{
    int m;
    cin>>m;

    cout<<fact(m)<<endl;
}