/*
given a string of paratheesis {,}  (,)  [and] , we need to
check if this string is balanced or not.
*/

#include <iostream>
#include <stack>

using namespace std;


bool matching(char a,char b)
{
    return ((a =='(' && b==')') || (a =='{' && b=='}') || (a=='[' && b==']') );
}

bool isBalances(string str)
{
    stack <int> s;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        s.push(str[i]);
        else
        {
            if(s.empty()==true)
            return false;
            else if(matching(s.top(),str[i])==false)
            return false;
            else 
            s.pop();

        }
    }
    return (s.empty()==true);
}