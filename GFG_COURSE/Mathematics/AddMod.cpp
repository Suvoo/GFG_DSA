/* https://practice.geeksforgeeks.org/problems/addition-under-modulo/1/?track=ppc-mathematics&batchId=221 */

//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++


int sumUnderModulo(long long a,long long b)
{
    int M=1000000007;
    //your code here
    
    return (a%M + b%M)%M;
}

// { Driver Code Starts.


int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    cin>>a>>b;
	    cout<<sumUnderModulo(a,b)<<endl;
	}
	return 0;
}  // } Driver Code Ends
