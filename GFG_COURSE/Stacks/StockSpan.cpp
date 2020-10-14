/* https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1/?track=ppc-stack&batchId=221 */

/* REFERENCE : https://youtu.be/-IFmgue8sF0 */

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to calculate span
// price[]: price array in input
// n: size of array
vector <int> calculateSpan(int price[], int n)
{
   // Your code here
   vector<int> v; stack<int> st;
   st.push(0); v.push_back(1);
   
   for (int i = 1; i < n; i++) { 
   
		while (!st.empty() && price[st.top()] <= price[i]) 
			st.pop(); 
			
			if(st.empty()) 
			    v.push_back(i + 1) ;
			else
			    v.push_back(i - st.top());
			
			st.push(i);
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
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		vector <int> s = calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends
