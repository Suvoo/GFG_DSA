/* https://practice.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/1/?track=ppc-arrays&batchId=221 

How this can be achieved?
Let’s assume an element is a and another element is b, both the elements are less than n. So if an element a is incremented by b*n. So the element becomes a + b*n so when a + b*n is divided by n then the value is b and a + b*n % n is a.

Algorithm:

Traverse the array from start to end.
For every index increment the element by array[array[index] % n]. To get the ith element find the modulo with n, i.e array[index]%n.
Again Travsese the array from start to end
Print the ith element after dividing the ith element by n, i.e. array[i]/n.


*/

#include<bits/stdc++.h>
using namespace std;
    
// Function to rarrange the elements in O(1) extra space
// arr: input array
// n: size of array
void arrange(long long arr[], int n) {
    // Your code here
    // First step: Increase all values by (arr[arr[i]]%n)*n 
    for (int i=0; i < n; i++) 
        arr[i] += (arr[arr[i]]%n)*n; 
  
    // Second Step: Divide all values by n 
    for (int i=0; i<n; i++) 
        arr[i] /= n;
    
    
}


// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        arrange(A, n);
        for(int i=0;i<n;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
