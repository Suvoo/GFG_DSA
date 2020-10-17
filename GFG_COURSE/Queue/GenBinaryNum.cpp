/* https://practice.geeksforgeeks.org/problems/generate-binary-numbers-1587115620/1/?track=pcc-queue&batchId=221 */

/* easier soln : https://practice.geeksforgeeks.org/problems/generate-binary-numbers/0 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long


 // } Driver Code Ends


// Function to print all binary numbers upto n

vector<string> generate(ll n)
{
	// Your code here
	queue<string> q; 
	vector<string> v;
  
    // Enqueue the first binary number 
    q.push("1"); 
  
    // This loops is like BFS of a tree with 1 as root 
    // 0 as left child and 1 as right child and so on 
    while (n--) 
    { 
        // print the front of queue 
        string s1 = q.front(); 
        q.pop(); 
        //cout << s1 << "\n"; 
        v.push_back(s1);
  
        string s2 = s1;  // Store s1 before changing it 
    
        // Append "0" to s1 and enqueue it 
        q.push(s1.append("0")); 
  
        // Append "1" to s2 and enqueue it. Note that s2 contains 
        // the previous front 
        q.push(s2.append("1")); 
    } 
    return v;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
