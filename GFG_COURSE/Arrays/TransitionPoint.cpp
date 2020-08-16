/* https://practice.geeksforgeeks.org/problems/find-transition-point-1587115620/1/?track=ppc-arrays&batchId=221 */

#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}

int transitionPoint(int a[], int n) {
    // code here
    
    int k=0;int ans=0;
    
    for(int i=0;i<n;i++){
        if(a[i] == 1){
            ans = i;k=1;
            break;
        }
    }
    
    if(k==0)
        return -1;
    else
        return ans;
}
