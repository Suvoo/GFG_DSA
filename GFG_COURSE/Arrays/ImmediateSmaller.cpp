/* https://practice.geeksforgeeks.org/problems/find-immediate-smaller-than-x/1/?track=ppc-arrays&batchId=221 */

#include <bits/stdc++.h>
using namespace std;

int immediateSmaller(int a[], int n, int x)
{
    // your code here
    vector< pair <int,int> > v; 
  int min = INT_MAX;int ans =0;
  
  for(int i=0;i<n;i++){
      v.push_back( make_pair(a[i],x-a[i]) ); 
    }
    for(int i=0;i<n;i++){
      if(v[i].second > 0){
        //cout << v[i].first << " " << v[i].second << endl;
        if(min > v[i].second){
          min = v[i].second;
          ans = v[i].first;
        }
      }
    }

    if(ans == 0)
      return -1;
    else
    return ans;
    
}

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    
            int n;
        	cin >> n;
        	
        	int arr[n];
        	
        	for(int i = 0;i<n;i++){
        	    cin >> arr[i];
        	}
        	
        	int x;
        	cin >> x;
        	
        	cout << immediateSmaller(arr, n, x) << endl;
	}
	
	
	return 0;
}
  // } Driver Code Ends
