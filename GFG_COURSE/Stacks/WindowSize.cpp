/*  https://practice.geeksforgeeks.org/problems/maximum-of-minimum-for-every-window-size3453/1/?track=ppc-stack&batchId=221 */
/* REFER :  gfg and comments also brute force */

#include <bits/stdc++.h>
using namespace std;

// Position this line where user code will be pasted.
vector <int> printMaxOfMin(int arr[], int n);
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        vector <int> res = printMaxOfMin(a, n);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


// Function to print maximum of minimum of every window size
// arr[]: input array
// N: size of array
vector <int> printMaxOfMin(int arr[], int n) {
    // Your code here
    stack<int>st;
    int left[n],right[n];
    for(int i=0;i<n;i++)
    {
        while(!st.empty() && arr[i]<=arr[st.top()])
        st.pop();
        left[i]=st.empty()?-1:st.top();
        st.push(i);
    }
    stack<int>s;
    st=s;
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && arr[i]<=arr[st.top()])
        st.pop();
        right[i]=st.empty()? n:st.top();
        st.push(i);
    }
    
    vector<int>ans(n+1,0);
    for (int i=0; i<n; i++) 
    { 
        int len=right[i]-left[i]-1; 
        ans[len]=max(ans[len],arr[i]); 
    } 
     for (int i=n-1; i>=1; i--) 
        ans[i] = max(ans[i], ans[i+1]);
        
    return vector<int>(ans.begin()+1,ans.end());
}
