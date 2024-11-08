/*Vector Advantages

- Dynamic size
- Rich Library Function
        -find
        -erase
        -insert
        -no need to pass size
        -can be returned from a function
        -by default initialized with default values.
        -we can copy a vector to other  {v1=v2}

//for size 


Arrays

int n= sizeof(arr)/sizeof(arr[o]);


vectors

int n= v.size();

//No Need to Pass Size

Arrays

int fun(int arr[] // it is same as pointr(it will give size of pointer),int n)
{

}


vectors

int fun(vector<int> v) 
{

}


//CAN BE RETURNED FROM A FUNCTION

arrays

int *fun()
{
    int arr[100];   //invalid function
    return arr;         //once function call is return then arr[] is relocated
}  

vectors

vector<int> fun()
{
    vector<int> v;

    return v
}



//by default initialized with default values
 vector<int> v{100}   --> all the values by defalut set to zero , all 100 values.
vector<bool> v{100}  --> all values will false

*/