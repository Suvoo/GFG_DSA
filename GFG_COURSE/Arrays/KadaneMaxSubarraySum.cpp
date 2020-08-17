/* https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1/?track=ppc-arrays&batchId=221 */

#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int a[], int n){
    
    // Your code here
        int curr_best = a[0];int  global_best = a[0];
 
    for (int i = 1; i < n; i++)
    {
        curr_best = max(curr_best + a[i], a[i]);
        global_best = max(global_best, curr_best);
    }
 
    //cout << global_best;
    return global_best;
    
}

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
