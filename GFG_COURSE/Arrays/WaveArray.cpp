/* https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1/?track=ppc-arrays&batchId=221 */

#include<bits/stdc++.h>
using namespace std;

void convertToWave(int *a, int n){
    
    // Your code here
      for(int i=0;i<n-1;i+=2){
    swap(a[i],a[i+1]);
  }
    
}

int main()
{
    int t,n;
    cin>>t; //Input testcases
    while(t--) //While testcases exist
    {
        cin>>n; //input size of array
        int a[n]; //declare array of size n
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        
        convertToWave(a, n);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; //print array
            
        cout<<endl;
    }
}  // } Driver Code Ends
