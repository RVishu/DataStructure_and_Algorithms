#include <bits/stdc++.h>
using namespace std;
//1- C-STYLE STRING --> there is a backslash zero at end on char string==>[g,f,g,\0]
    /*
   
    int main()
    {
        char str1[]={'g','f','g'};  // here in end compiler NOT  put \0 at end
        char str2[]="gfg"; // here in end compiler put \0 at end
        cout<<str1<<endl;
        cout<<sizeof(str1);   //str1=3 , str2=4
        return 0;
    }

// Functions in C-style;
    strlen(str)  - length
    strcmp(s1,s2)   - comparison(lexicographically-> Dictonary) if (s1>s2)--> True
                    - used to assign string to an unintialize character array
        int main()
        {
            char s1[]="gfg";
            char s2[]="bcd";
            int res= strcmp(s1,s2);
            if(res>0)
                cout<<"Greater";
            else if(res==0)
                cout<<"same";
            else
                cout<<"Smaller";    
        }   

// commpiler error for assigning an address which already exist

    int main()
    {
        char str[5];
        str="gfg"; ==> strcpy(str,"gfg") // this line will give compilation error;
        cout<<str;
        return 0;
    }

    strcpy(s1,s2)   
    */

/*
        // STRING IS A CLASS(which have data memeber , function ) IN C++

2- C++ STRING -> they are like vectors(dyamic size ,cache friendly)
    -richer library
    -supports operators like +,<,>,==,<=,>= are possible;
    -can assign a string later

         string str;
         str="gfg";

    -do not have to worry about size
    -can be converted to c-style if needed

*/

int main()
{
    string str="geeksforgeeks";
    cout<<str.length()<<" ";
    str=str+"xyz";
    cout<<str<<" ";
    cout<<str.substr(1,3)<<" "; // this gives you substring (beginning Index , Length of required substring )
    cout<<str.find("eek")<<" "; // it will give index of first occurence.
                                // if not found then ==> string::npos  {it means no position found}
    return 0;
}

// C++ style operator uses
int main()
{
    string s1="abc";
    string s2="bcd";
    if(s1==s2)
    cout<<"same";
    if(s1<s2)
    cout<<"smaller";
    else 
    cout<<"greater";
}


// Reading Strings from Console;

int main()
{
    string str;
    cout<<"Enter your name";  
    cin>>str;   // Vishal Rao
    // Vishal  -=> bcz when cin sees space it stops there
    // to get rid of this problem , we use GETLINE FUNCTION
    getline(cin,str,'a'); // this function doesn't stop until we hit the enter.
                    // here 'a' in getline function is character , where to stop
    cout<<"Your Name is "<<str;  // Vishal  -=> bcz when cin sees space it stops there
    return 0;
}

// ITERATING THROUGH A STRING
int main()
{
    string str="geeksforgeeks";
    for(int i=0;i<str.length();i++)
        cout<<str[i];
    cout<<endl;

    // other way is below
    for(char x:str)
        cout<<x;    
}