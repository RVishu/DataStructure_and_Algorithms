/*
    - unordered map uses RAt lab tree
    -used to store key,value pairs  ==> ordered map stores keys in ordered form
    -uses hashing
    -No order of keys
*/

// unordered_map< key,Value > m;

#include <iostream>
#include <unordered_map> m;

using namespace std;

int main()
{
    unordered_map <string,int> m;
    m["gfg"]=20;  // [] are memeber access of operators
    m["ide"]=30;
    m.insert({"courses",153});
    for(auto x: m)
        cout<<x.first<<" "<<x.second<<endl;
    return 0;    
}

int main()
{
     unordered_map <string,int> m;
    m["gfg"]=20;  // [] are memeber access of operators
    m["ide"]=30;  // m["vishal"] if this key is not pressent on searching then this operator will INSERT a key if not present.
    m["courses"]=15;
    // auto it = m.find("ide");  // to search for specific value or key --> cout<<(it->second)   // it will print 30;
    if(m.find("ide")!=m.end())  // this line means if key is not present in the unorderd map then this find function returns a iterator which is m.end()
        cout<<"Found\n";
    else
        cout<<" Not Found\n"; 
    for(auto it=m.begin();it!=m.end();it++)
        cout<<(it->first)<<" "<<(it->second)<<endl;
    return 0;           

}

//COUNT FUNCTION ON UNORDERD MAP --> it is substitute of find function
int main()
{
     unordered_map <string,int> m;
    m["gfg"]=20;  // [] are memeber access of operators
    m["ide"]=30;  // m["vishal"] if this key is not pressent on searching then this operator will INSERT a key if not present.
    m["courses"]=15;
    // auto it = m.find("ide");  // to search for specific value or key --> cout<<(it->second)   // it will print 30;
    if(m.count("ide")>0)
        cout<<"found";
    else 
        cout<<"Not Found";    
    return 0;           

}


//SIZE AND ERASE FUNCTION

int main()
{
     unordered_map <string,int> m;
    m["gfg"]=20;  
    m["ide"]=30; 
    m["courses"]=15;
        cout<<m.size()<<" ";
        m.erase("ide");  // erase will remove key-value pair
        m.erase(m.begin());  // we can pass ending also              // erase function also receive iterator as a parameter.
            cout<<m.size()<<" ";  
    return 0;           

}


/*
TIME COMPLEXICITES

        begin(), end(), size(), empty()    - O(1) in Worst case
        count(), find(), erase(key), insert(), [], at     -O(1) on average 

*/