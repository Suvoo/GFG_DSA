/* https://practice.geeksforgeeks.org/problems/quadratic-equation-roots/1/?track=ppc-mathematics&batchId=221 */

//Initial Template for C++
/* C++ program to find roots of a quadratic equation */
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//You need to complete this function
void quadraticRoots(int a,int b, int c)
{
   
   //Your code here
   double d =sqrt(b*b-4*a*c);
  if(d>=0){
   int a1=floor((-b+d)/(2*a));
   int a2=floor((-b-d)/(2*a));
  
  if((a1)<(a2))
  cout<<a2<<" "<<a1;
  else
  cout<<a1<<" "<<a2;
      
  }
  else cout<<"Imaginary";
   // Your don't need to printline
   // It will automatically be 
   // handled by driver code
}



// { Driver Code Starts.

int main() {
	int T; 
	//input number of testcases
	cin>>T; 
	
	while(T--)
	{
	    int a, b, c; 
	    //Input a, b, and c
	    cin>>a>>b>>c; 
	    
	    quadraticRoots(a,b,c);
	    cout<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends
