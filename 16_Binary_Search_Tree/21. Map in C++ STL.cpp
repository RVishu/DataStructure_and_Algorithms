 

/*
MAP also use RED BLACK TREE
 MAP is used to red key value pairs.

 items are ordered according to keys ->increasing order
*/

#include <bits/stdc++.h>
#include <map>
#include <iostream>

using namespace std;

int main()
{
    map<int,int> m;
    m.insert({10,200});
    m[5]=100; // also a way to insert key-value pair
    m.insert({3,300});

    // if we add new key as ({3,400}) this new value will be completely ignored

    for(auto &x:m)
    cout<<x.first<<" "<<x.second<<" ";  // 3 300 5 100 10 200

    return 0;


}

// 2nds 

int main()
{
    map<int,int> m;
    m.insert({10,200});
   
   cout<<m.size()<<" ";

   cout<<m[20]<<" "; // by default this line make to insert pair == ({20,0})

   cout<<m.size()<<" ";

   //also  m[10]=300 -> it will update the value as size =1 in this code, that is updated value {10,300}


    /*
    at()  - this function works as sam as m[] but it will through error if , we find any key which is not presernt
    
    */
    return 0;


}

// begin and clear 

int main()
{
    map<int,int> m;
    m.insert({10,200});
    m.insert({5,300});
    m.insert({20,400});

    for(auto it=m.begin();it!=m.end();it++)
        cout<<(*it).first<<" "<<(*it).second<<endl;

    m.clear();

    cout<<m.size();

    //find function - given key in map or not

    return 0;    
}

int main()
{
    map<int,string> m;
    m.insert({10,"gfg"});
    m.insert({5,"ide"});
    m.insert({20,"practice"});

    if(m.find(5)==m.end())  // we can call find only to KEY not to value
        cout<<"Not found";
    else    
        cout<<"found";



    //
    for(auto it=m.find(10);it!=m.end();)
        cout<<(*it).first<<" "<<(*it).second<<"\n"; // 10 gfg 20 practice

     // count()- (either 0 or 1)used to find a elements is preseent or not        

// lower_bound() - that key or just greater than that key
//               - if key is greater than the greatest than m.end() return

// upper_bound() - it will return just greater than value.  not that value




// FEW CHANGES IN MAP - greater

  map<int,string,greater<int>> m;
    m.insert({1,"gfg"});
    m.insert({5,"ide"});
    m.insert({2,"practice"});

    auto it=m.upper_bound(2);
    if(it!=m.end())
        cout<<(*it).first;  // 1  because now value is descending order
        else
        cout<<"NO greater value";
 // erase() - it is used to erase key-value or set of key-value pairs

//m.erase(5)  also m.erase(m.find(5))- this functuon also receive iterator as a parameter
// m.erase(m.find(2);m.end()) - it erase set of key-values

}


/*

INTERNAL WORKING & TIME COMPLEXITIES

begin()
end()
rbegin()
rend()        --> O(1)
size()
empty()
crbegin()
crend()
cbegin()
cend()


erase(it) -> on average takes O(1) time


count()
find()
erase(key)      --> O(logn)
insert
[]
at 




APPLICAATION OF MAPS
    -> sorted stream of data with (key,value) pairs
    -> doubly ended priority quees of items with (key,value) pairs


*/