/* https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1/?track=ppc-arrays&batchId=221 */

#include<bits/stdc++.h>
using namespace std;

void rotateArr(int arr[], int d, int n){
    // code here
            int temp[d],i;
    for (i = 0 ; i < d; i++)
        temp[i] = arr[i]; // temp array to store elements to be rotated
        
    for (i = 0 ; i < n - d; i++) 
        arr[i] = arr[i + d]; // shifting elements after d to start
        
    for (i = n - d; i < n; i++) 
        arr[i] = temp[i - (n - d)]; // appending temp array to the end of main array
        //return a;

}

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, d;
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    
	    rotateArr(arr, d,n);
	    
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}  // } Driver Code Ends
