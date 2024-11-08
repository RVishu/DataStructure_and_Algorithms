//recursion--> a function called itself

#include <bits/stdc++.h>
using namespace std;


// void fun1()
// {
//     cout<<"fun1"<<endl;
// }
// void fun2()
// {
//     cout<<"before fun1 "<<endl;
//     fun1();
//     cout<<"after fun1 "<<endl;
// }
// int main()
// {
//     cout<<"before fun2 "<<endl;
//     fun2();
//     cout<<"after fun2 "<<endl;
//     return 0;
// }


//DIRECT RECURSIVE PROGRMMES
// void fun1()
// {
//     cout<<"gfg"<<endl;
//     fun1();
// }
// int main()
// {
//    fun1();
//    return 0;   //IT WILL GIVE SEGMENTATION FAULT;
// }

//MODIFIED VERSION OF RECURSIVE PROBLEM

void fun1(int n)
{
    if(n==0)      //BASE CASE
    return;        //BASE CASE
    cout<<"gfg"<<endl;
    fun1(n-1);

}