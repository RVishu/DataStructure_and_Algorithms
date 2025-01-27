/*
MyHash mh(7);    49,56,72,-1,-1,-1,-1   
mh.insert(49);
mh.insert(56);
mh.insert(72);
    if(mh.search(56)==true)
        print("yes");
    else
        print("No");
    mh.erase(56);           49,-2,72,-1,-1,-1,-1
        if(mh.search(56)==true)
            print("yes");
        else
            print("No");            
*/


/*
struct MyHash 
{
    int *arr;
    int cap,size;
    MyHash(int c)
    {
        cap=c;
        size=0;
            for(int i=0;i<cap;i++)
            arr[i]=-1;
    }
    int hash(int key)
    {
        return Key%cap;
    }
    bool search(int key)        // BASED ON LINEAR PROBING ONLY
    {
        int h=hash(key);
        int i=h;
        while(arr[i]!=-1)
        {
            if(arr[i]==key)
            return true;
            i=(i+1)%cap;

            if(i==h)
            return false;
        }
        return false;
    }
    bool insert(int key)         // BASED ON LINEAR PROBING ONLY
    {
        if(size==cap)
        return false;
        int i=hash(key);

        while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key)   //SEARCH DOESN'T STOP AT DELETED LOCATION , BUT INSERT DOES STOP 
            i=(i+1)%cap;
        if(arr[i]==key);
            return false;
        else 
        {
            arr[i]=key;
            size++;
            return true;
        }        
    }
    bool erase(int key)
    {
        int h= hash(key);
        int i=h;
        while(arr[i]!=-1)
        {
            if(arr[i]==key)
            {
                arr[i]=-2;
                return true;
            }
            i=(i+1)%cap;
            if(i==h)
                return false;
        }
        return false;
    } 
}
*/