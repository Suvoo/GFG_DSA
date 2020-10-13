/* https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1/?track=ppc-stack&batchId=221 */
/* REFERENCE : https://youtu.be/sDKpIO2HGq0 */

/* without vector  : in video */

/* VECTOR IMPLEMENTATION */

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to store Next larger elements


vector <long long> nextLargerElement(long long arr[], int n){
    // Your code here
    stack<long long> s;
    vector<long long> v;
    
        s.push(arr[n-1]);
        v.push_back(-1);
        
    for(long long i=n-2;i>=0;i--){
        
        while(!s.empty() && s.top()<=arr[i])
        s.pop();
        if(s.empty())
            v.push_back(-1);
        else
            v.push_back(s.top());
    
        s.push(arr[i]);
    }
        reverse(v.begin(), v.end());
        
        //for (long long i = 0; i < v.size(); i++)
            //cout << v[i] << " ";
            
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
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        vector <long long> res = nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
  // } Driver Code Ends
