/* https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1/?track=pcc-queue&batchId=221 */
/* USE STACk*/

//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long
queue<ll> modifyQueue(queue<ll> q, int k);
int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll n,k;
        cin>>n>>k;
        queue<ll> q;
        while(n-->0){
            ll a;
            cin>>a;
            q.push(a);
        }
        queue<ll> ans=modifyQueue(q,k);
        while(!ans.empty()){
            int a=ans.front();
            ans.pop();
            cout<<a<<" ";
        }
        cout<<endl;
    }
}// } Driver Code Ends


//User function Template for C++

queue<ll> modifyQueue(queue<ll> q, int k)
{
    //add code here.
    stack<ll> s;
    queue<ll> q1;
    
    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }
        
        while(!s.empty()){
            q1.push(s.top());
            s.pop();
        }
        
        while(!q.empty()){
            q1.push(q.front());
            q.pop();
        }
    return q1;
}
