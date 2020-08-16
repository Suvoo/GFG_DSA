/* https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1/?track=ppc-arrays&batchId=221 */

#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int arr[], int n){
    
    vector<int> res;
    res.push_back(arr[n-1]);
    int maxelement=arr[n-1];
    
        for(int i=n-2;i>=0;i--){
            if(arr[i]>=maxelement){
                maxelement=arr[i];
                res.push_back(maxelement);
            }
        }
        reverse(res.begin(),res.end());
        
    return res;
    
}

int main()
{
   long long t;
   cin >> t;
   while (t--)
   {
       long long n;
       cin >> n;
        
        int a[n];
        
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        
        vector<int> v = leaders(a, n);
        
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends
