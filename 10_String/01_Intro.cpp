/*
    -sequence of characters
    -small set
    -contiguouss interger values for 'a' to 'z' and
     'A' to 'Z' in ASCII
    -char: 8 Bit
    - also sssupport wchar_t (for wide characters) 

    char x='a';
    cout<<int(x);  ==> 97
*/

#include <bits/stdc++.h>
using namespace std;
// print frequencies of characters (in sorted order) in a string of lower case alphabet.

string str="geeksforgeeks";
int count[26]={0};

/*
for(int i=0;i<str.length();i++) // O(n)
    count[str[i]-'a']++;
for(int i=0;i<26;i++)  //O(1) this
{
   if(count[i]>0) 
    count<<(char)(i+'a')<<" "<<count[i]<<endl;

}   
we can sort a string in O(n) time --> to use counting sort
*/