/* https://practice.geeksforgeeks.org/problems/modular-multiplicative-inverse-1587115620/1/?track=ppc-mathematics&batchId=221 */

#include<iostream>
using namespace std;

int modInverse(int a, int m)
{
    //Your code here
    int ans=0;
    for(int i=1;i<=m;i++){
        if((i*a)%m == 1){
            ans = i;
            break;
        }
    }
    if(ans==0)
        return -1;
    else
    return ans;
}

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--){
		int a,m;
		cin>>a>>m;
		cout << modInverse(a, m)<<endl;
	}
    return 0;
}  // } Driver Code Ends
