/* https://practice.geeksforgeeks.org/problems/maximize-the-sum/1/?track=pcc-queue&batchId=221 */

//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


long maximum_sum(vector<int>v,int k)
{
   // Your code here
   unordered_map<int,int> mp;
   int i=0;
   for(i=0;i<v.size();i++){
        if(mp.find(v[i])==mp.end()){
            mp[v[i]] = 1;
        }
        else
            mp[v[i]]++;
   }
    priority_queue<pair<int,int>> pq;
    for(auto itr: mp){
        pq.push({itr.second, itr.first});
    }
    long ans = 0;
    for(i=1;i<=k;i++){
        pair<int,int> p = pq.top();
        ans += p.second;
        pq.pop();
        pq.push({p.first-1, p.second});
    }
    return ans;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n,0);
        
        for(int i=0;i<n;i++)
        cin>>v[i];
        
        cout<< maximum_sum(v,k)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
