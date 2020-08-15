/* https://practice.geeksforgeeks.org/problems/exactly-3-divisors/1/?track=ppc-mathematics&batchId=221 */


#include <bits/stdc++.h>
using namespace std; 


bool isPrime(int n)
{
    //Your code here
        int sq = sqrt(n);
        int c =0;
        
        for(int i=1;i<=sq;i++){
            if(n % i == 0){
                c++;
            }
        }
        if(c==1)
            return true;
        else
            return false;
    
}

//Complete this function
int exactly3Divisors(int n)
{
    if(n <= 3){
        return 0;
    }
    int c =1;
    for(int i=3;i<=sqrt(n);i++){
        if(isPrime(i) && (i*i) <=n){
            c++;
        }
    }  
            
    return c;
}


int main()
 {
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends
