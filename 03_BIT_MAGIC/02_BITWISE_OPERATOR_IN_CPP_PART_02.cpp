#include <bits/stdc++.h>
using namespace std;

//LEFT SHIFT BITWISE OPERATOR(<<);
int main()
{
    int x=3;
    cout<<(x<<1)<<endl;
    cout<<(x<<2)<<endl;

    int y=4;
    int z=(x<<y);
    cout<<z;
    return 0;
}

//RIGTH SHIFT BITWISE OPERATOR(>>);
int main()  
{
    int x=33;
    cout<<(x>>1)<<endl;
    cout<<(x>>2)<<endl;
    int y=4;
    int z=(x>>y);
    cout<<z;
    return 0;
}

//BITWISE NOT (~)
int main()
{
    unsigned int x=1;
    cout<<(~x)<<endl;
    x=5;
    cout<<(~x)<<endl;
    return 0;
}

//SIGNED INPUT (-2^31 to 2^31-1)

int main()
{
  int x=1;
    cout<<(~x)<<endl;
    x=5;
    cout<<(~x)<<endl;
    return 0;
}