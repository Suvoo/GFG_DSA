/* https://practice.geeksforgeeks.org/problems/digits-in-factorial/1/?track=ppc-mathematics&batchId=221 
    
    We know,
log(a*b) = log(a) + log(b)

Therefore
log( n! ) = log(1*2*3....... * n) 
          = log(1) + log(2) + ........ +log(n)

*/


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

//You need to complete this function
int digitsInFactorial(int N)
{
    //Your code here
    double ans=0;
    if(N==1)
        return 1;
    else{
        
        for(int i=2;i<=N;i++){
            ans+=log10(i);
        }
        
        return floor(ans) + 1;
    }
}

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<digitsInFactorial(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
