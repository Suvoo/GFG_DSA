/* https://practice.geeksforgeeks.org/problems/primality-test/1/?track=ppc-mathematics&batchId=221 */

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//You need to complete this function
bool isPrime(int n)
{
    //Your code here
    if(n==2)
        return true;
    else{
        int sq = sqrt(n);
        int c =0;
        
        for(int i=1;i<=sq;i++){
            if(n%i == 0){
                c++;
            }
        }
        if(c==1)
            return true;
        else
            return false;
    }
    
}


// { Driver Code Starts.

int main()
{
    int T; //testcases
    cin>>T; //input testcases
    while(T--) //while testcase have not been exhausted
    {
        int N;
        cin>>N; //input n
        
        if(isPrime(N)) 
        cout<<"Yes";
        else
            cout<<"No";
            
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends
