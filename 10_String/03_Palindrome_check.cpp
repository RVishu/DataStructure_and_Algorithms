#include <bits/stdc++.h>
using namespace std;

/*
DBM - wrong

bool palindrome(string str)
{
    string temp;
    for(int i=0;i<str.length();i++)
    temp[i]=str[i];

    if(temp==str)
    return true;

    else 
    {
        return false;
    }
}




MINE ANOTHER   O(n) and O(1)

n=str.length();
for(int i=0;i<n/2;i++)
{
    if(str[i]!=str[n-1-i]);
        return false;
}

return true;









*/

//NAIVE SOLUTION - theta(n) and theta(n)
bool isPal(string &str)
{
    string rev=str;
    reverse(rev.begin(),rev.end());  // reverse function
    return (rev==str);
}

int main()
{
    string str;
    getline(cin,str);
    cin>>str;
    cout<<isPal(str);
}

//efficient solution- O(n) and O(1)
bool isPalindrom(string &str)
{
    int begin=0;
    int end=str.length()-1;
    while(begin<end)
    {
        if(str[begin]!=str[end])
            return false;
        begin++;
        end--;    
    }
    return true;
}

