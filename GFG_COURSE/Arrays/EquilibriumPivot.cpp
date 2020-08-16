/* https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1/?track=ppc-arrays&batchId=221 */

#include <iostream>
using namespace std;

int equilibriumPoint(long long a[], int n);

int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long a[n];

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}

int equilibriumPoint(long long a[], int n) {

    // Your code here
    
    long long sum=0,leftsum=0;
    
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    for(int i=0;i<n;i++){
        sum = sum - a[i];
        
        if(sum == leftsum)
            return i+1;
        
        leftsum = leftsum + a[i];
    }
    return -1;
}
    
