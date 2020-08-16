/* https://practice.geeksforgeeks.org/problems/who-has-the-majority/1/?track=ppc-arrays&batchId=221 */

#include <bits/stdc++.h>
using namespace std;

int majorityWins(int arr[], int n, int x,int y);


int majorityWins(int a[], int n, int x,int y)
{
    int count_x=0;//counter to count frequency of x
    int count_y=0;//counter to count frequency of y
    map<int,int> mp;
    
    for(int i=0;i<n;i++){
        if(a[i] == x)
        mp[x]++;
        else if(a[i] == y)
        mp[y]++;
    }
    count_x = mp[x];
    count_y = mp[y];
    int ans = 0;
    
    if(count_x > count_y){
    for(auto i : mp){
      if(i.second == count_x){
        ans = i.first;
        break;
      }
    }
    return ans;
    }
    else if(count_y > count_x){
      for(auto i : mp){
      if(i.second == count_y){
        ans = i.first;
        break;
      }
    }
    return ans;

    }
    else{
      return min(x,y);
    }
    
}


int main() {
    
    int t; //Testcases
    cin>>t; // Input the testcases
    while(t--) //Until all testcases are exhausted
    {
        int n; //Size of array
        cin>>n; //Input the size
        int arr[n]; //Declaring array of size n
        for(int i=0;i<n;i++) // Running a loop to input all elements of arr
        cin>>arr[i];
        
        int x,y; //declare x and y
        cin>>x>>y; // input x and y
        cout << majorityWins(arr,n,x,y) << endl; //calling the function that you complete
        
    }
    
	return 0;
}  // } Driver Code Ends
