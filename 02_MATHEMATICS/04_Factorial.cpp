#include <bits/stdc++.h>
using namespace std;

// my solution--> iterrative


// int factorial(int n)   // my mistake it also handle corner case of factorial 0 which is 1;
// {
//     int m=n;
//     int value=1;
//     {
//         while(m>1)
//         {
//             value=value*m;  //value*=m;
//             m = m-1;  //m-=1;
//         }
        

//      }
//     return value;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<factorial(n);

//     return 0;
// }




// Chatgpt iterative solution 
// long long int factorial(int n)
// {
//     long long int value = 1;
//     for (int i = 2; i <= n; ++i)
//     {
//         value *= i;
//     }
//     return value;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << factorial(n);

//     return 0;
// }



// Iterative solution mine

int factorial_Recursive(int n)
{
    if(n==0 || n==1)
        return 1;
        
    return factorial_Recursive(n-1)*n;

                                                    //return (n-1)*factorial_Recursive(n-1); --> wrong approach
}


int main()
{
    int n;
    cin>>n;
    cout<<factorial_Recursive(n);

    return 0;
}
