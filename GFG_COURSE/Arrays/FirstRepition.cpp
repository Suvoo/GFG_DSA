/* https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1/?track=ppc-arrays&batchId=221 */

//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


unordered_map<int, int> um;


int firstRepeated(int *, int);

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        int arr[n];
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> arr[i] ;
            
        cout << firstRepeated(arr,n) << "\n";
    }

    return 0;
}
// } Driver Code Ends


//User function template in C++


// arr : given array
// n : size of the array
int findpos(int n,int a[],int pos){

  for(int i=0;i<n;i++){
    if(a[i] == pos)
      return i+1;
  }
}

int firstRepeated(int a[], int n) {
    //code here
    unordered_map<int,int> mp;

  vector<int> v;
  for(int i=0;i<n;i++){
    //cin >> a[i];
    mp[a[i]]++;
  }

  for(auto i : mp){
    //cout << i.first << " " <<i.second << endl;
    if(i.second >= 2){
      int ans = findpos(n,a,i.first);
      v.push_back(ans);
      //cout << ans << endl;
    }
  }
  if(v.size() == 0){
      return -1;
  }

  sort(v.begin(), v.end());
  //cout << v[0] ;
  return v[0];
}
