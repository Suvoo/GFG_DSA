/* https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number3051/1/?track=ppc-arrays&batchId=221 */

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find missing integer in array
// arr: input array
// n: size of array
int findMissing(int ar[], int n) { 
    
    // Your code here

    int hash[1000001]={0};
    for(int i=0;i<n;i++)
    {
        if(ar[i]>0) 
            hash[ar[i]]=1; 
    }
    for(int i=1;i<1000001;i++)
    {
        if(hash[i]!=1){
            return i;
        }
    }
//return 1000001;
}

// { Driver Code Starts.

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0; i<n; i++)cin>>arr[i];
        
        cout<<findMissing(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends
