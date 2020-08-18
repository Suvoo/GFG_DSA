/*https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1/?track=ppc-arrays&batchId=221*/
/* REFERENCES : https://www.geeksforgeeks.org/trapping-rain-water/
                https://youtu.be/pq7Xon_VXeU 
        */
        
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


   

// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int arr[], int n){

    // Your code here
   // initialize output
    int result = 0;
 
    // maximum element on left and right
    int left_max = 0, right_max = 0;
 
    // indices to traverse the array
    int lo = 0, hi = n - 1;
 
    while (lo <= hi) {
        if (arr[lo] < arr[hi]) {
            if (arr[lo] > left_max)
                // update max in left
                left_max = arr[lo];
            else
                // water on curr element = max - curr
                result += left_max - arr[lo];
            lo++;
        }
        else {
            if (arr[hi] > right_max)
                // update right maximum
                right_max = arr[hi];
            else
                result += right_max - arr[hi];
            hi--;
        }
    }
 
    return result;
    
}

// { Driver Code Starts.

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        
        cin >> n;
        
        int a[n];
        
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        
        cout << trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends
