#include <bits/stdc++.h>
using namespace std;


// NAIVE SOLUTION - theta(nk) and AS= theta(n)
void printKClosest(int arr[], int n, int k, int x)
{
    bool visited[n]={false};
    
    for(int i=0;i<k;i++){
        
        int min_diff=INT_MAX;
        int min_diff_idx;
        
        for(int j=0;j<n;j++){
            if(visited[j]==false && abs(arr[j]-x)<=min_diff){
                min_diff=abs(arr[j]-x);
                min_diff_idx=j;
            }
        }
        cout<<arr[min_diff_idx]<<" ";
        visited[min_diff_idx]=true;
    }
}

int main()
{

	int arr[] = { 10,30,5,40,38,80,70 };

	int size = sizeof(arr) / sizeof(arr[0]);

	int x=35; int k = 3;

	printKClosest(arr,size,k,x);

	return 0;
}

// EFFICIENT SOLUTION- O(nlogk)
/*
1- create a Max heap ,pq(priority queue)

2- for(i=0;i<k;i++)                   O(klogk)
    pq.insert(abs(arr[i]-x),i);
3- for(i=k;i<n;i++)
{
    int diff=abs(arr[i]-x);
    if(pq.peek().diff>diff)      O((n-k)logk)
    {
        pq.pop()
        pq.add(diff,i)
    }
}
4- for(i=0;i<k;i++)                  O(klogk)
    print(pq.pop().index+" ")

*/



#include <bits/stdc++.h>
using namespace std;

void printKClosest(int arr[], int n, int k, int x)
{
     priority_queue<pair<int, int> > pq; 
    for (int i = 0; i < k; i++) 
        pq.push({ abs(arr[i] - x), i }); 
  
    for (int i = k; i < n; i++) { 
        int diff = abs(arr[i] - x); 
        if ( pq.top().first>diff ){
        pq.pop(); 
        pq.push({ diff, i }); 
        }
    } 
   
    while (pq.empty() == false) { 
        cout << arr[pq.top().second] << " "; 
        pq.pop(); 
    } 
}

int main()
{

	int arr[] = { 10,30,5,40,38,80,70 };

	int size = sizeof(arr) / sizeof(arr[0]);

	int x=35; int k = 3;

	printKClosest(arr,size,k,x);

	return 0;
}
