#include <bits/stdc++.h> 
using namespace std; 

int sortK(int arr[], int n, int k)  // int == void (in lecture)
{ 
	priority_queue<int, vector<int>, greater<int> > pq; 
    
    for(int i=0;i<=k;i++)  // O(klogk)
        pq.push(arr[i]);
        
	int index = 0; 
	for (int i = k + 1; i < n; i++) {  // O((n-k)logk)
		arr[index++] = pq.top(); 
		pq.pop(); 
		pq.push(arr[i]); 
	} 

	while (pq.empty() == false) { 
		arr[index++] = pq.top();   // O(klogk)
		pq.pop(); 
	} 
} // ovrall O(n+k)logk

// till here , above code was in lecture

void printArray(int arr[], int size) 
{ 
	for (int i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 
 
int main() 
{ 
	int k = 3; 
	int arr[] = { 2, 6, 3, 12, 56, 8 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	sortK(arr, n, k); 

	cout << "Following is sorted array" << endl; 
	printArray(arr, n); 

	return 0; 
} 
