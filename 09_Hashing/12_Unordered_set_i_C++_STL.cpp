#include <iostream>
#include <unordered_set>
using namespace std;



// unordered set is based on HASHING ==> it doesn't maintain any ORDER of the element
        /*
        Insert()
        begin()
        end()
        size()  --> it returns iterator beyond the last element 
        clear() --> it can be useful for set , unorder set, vector for multiple test cases;
        find()
        */

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);

    for(auto it=s.begin();it !=s.end();it++)
            cout<<(*it)<<" ";
    cout<<endl;
    cout<<s.size()<<" "<<endl;;
    s.clear();      //  it clears the unordered set   
    cout<<s.size()<<" ";
    return 0;
//     for(int x:s)
//         cout<<x<<" ";  // ALL ELEMENTS CAN BE PRINTED IN ANY ORDER
//     return 0;    
 }

 /*
 FIND FUNCTION

 if(s.find(15)==s.end())
 cout<<"Not Found";
 else
 cout<<"Found"<<*(s.find(15));
 return 0;
 */

/*
 COUNT FUNCTION

 if(s.count(15))
 cout<<"Found";
 else
 cout<<"Not Found";
 return 0;
 */

/*
 ERASE FUNCTION

cout<<s.size()<<" ";
 s.erase(15);
 cout<s.size()<<" ";
 auto it=s.find(10);
 s.erase(it);
 cout<<s.size()<<" ";
 return 0;


 //for set of elemetns ERASE FUNCTION CAN ALSO BE USED;

 s.erase(s.begin(),s.end());  --> it will remove everything.
 return 0;
 
 */



/*
INTERNAL WRITING & TIME COMPLEXITIES

    1-begin(),end()
    2-cbegin(),cend()  --> c = constant
            1 & 2 both take O(1)


    3-insert(), erase(value)
    4-erase(it),find()
    5-count()   
            3 ,4 & 5 use O(1) on Average   

    6- size()
    7- empty()
            6 & 7 are also O(1)              
*/

/*
APPLICATION

we can use anywhere when we need following operations
(or a subset of following operator quickly)
    search
    insert 
    delete
*/