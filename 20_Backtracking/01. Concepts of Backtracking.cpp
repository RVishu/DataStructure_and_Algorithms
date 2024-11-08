/*
Given a string ,print all those permutaions which
do not contain "AB" as a substring.

I/P : str = "ABC"
O/P : ACB,BAC,BCA,CBA
*/

/*
NAIVE SOLUTION

void permute(string str,int l,int r)
{
    if(l==r)
    {
        if(str.find("AB")==string::npos)  // npos is const ,which indicate for not found
        {
            cout<<str;  //print(str)
            return;
        }
    }
    else
    {
        for(int i=l;i<=r;i++)
        {
            swap(str[l],str[i]);
            permute(str,l+1,r);  // it fix l=1 position then call for remaining strings
            swap(str[l],str[i]);
        }
    }
}



*/


// IN BACKTRACKING SOLUTIOON WE DON'T JUST GENERATE ALL PERMUTATUON THEN CHECK
//  BUT WE DO -> 

/*

bool is_safe(string str,int l,int i,int r)
{
    if(l!=0 && str[l-1]=='A' && str[i]=='B')
        return false;
    if(r=l+1 && str[i]='A' && str[l]='B')
        return false;

    return true;        
}


void permute(string str,int l,int r)
{
    if(l==r)
    {
        if(str.find("AB")==string::npos)  // npos is const ,which indicate for not found
        {
            cout<<str;  //print(str)
            return;
        }
    }
    else
    {
        for(int i=l;i<=r;i++)
        {
            if(is_safe(str,l,i,r))
            {
                swap(str[l],str[i]);
            permute(str,l+1,r);  // it fix l=1 position then call for remaining strings
            swap(str[l],str[i]);
            }
        }
    }
}

*/