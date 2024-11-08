#include <bits/stdc++.h>
using namespace std;

/*
//NAIVE 
    - create a stack
    -push words one by one to the stack
    - pop words from the stack and append to output
*/

// how can be do it inPlace(without using auxiliary space)

//efficient
void reverseWords(char str[],int n)
{
    int start =0;
    for(int end =0;end<n;end++)
    {
        if (str[end]==' ')  // use ' '  ,not  " "
        {
            reverse(str,start,end-1);
            start=end+1;
        }
    }
    reverse(str,start,n-1);
    reverse(str,0,n-1);
}
void reverse(char str[],int low,int high)
{
    while(low<=high)
    {
        swap(str[low],str[high]);
        low++;
        high--;
    }
}
/*
in case u intialize a character array like below
char str[]="welcome to gfg";
do pass array size minnus one as parameter  bcz of \0
*/