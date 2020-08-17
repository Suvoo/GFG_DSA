/* https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1/?track=ppc-arrays&batchId=221 */

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find the subarray with given sum k
// arr: input array
// n: size of array
vector<int> subarraySum(int arr[], int n, int sum){
    
     int curr_sum = arr[0], start = 0, i; 
     vector<int> v;
  
    /* Add elements one by one to curr_sum and  
    if the curr_sum exceeds the sum, 
    then remove starting element */
    for (i = 1; i <= n; i++) { 
        // If curr_sum exceeds the sum, 
        // then remove the starting elements 
        while (curr_sum > sum && start < i - 1) { 
            curr_sum = curr_sum - arr[start]; 
            start++; 
        } 
  
        // If curr_sum becomes equal to sum, 
        // then return true 
        if (curr_sum == sum) { 
            //cout << "Sum found between indexes "
                 //<< start << " and " << i - 1; 
                 v.push_back(start + 1);
                 v.push_back(i);
            return v; 
        } 
  
        // Add this element to curr_sum 
        if (i < n) 
            curr_sum = curr_sum + arr[i]; 
    } 
  
    // If we reach here, then no subarray 
    //cout << "No subarray found"; 
    v.push_back(-1);
    return v; 
    
}

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        vector<int>res;
        res = subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
