#include <bits/stdc++.h>
using namespace std;

bool palindrom(string &str,int start,int end)  // start =0 ,, end =n-1

{
    if(start>=end)
        return true;

    return(str[start]==str[end] && palindrom(str,start+1,end-1));    

}