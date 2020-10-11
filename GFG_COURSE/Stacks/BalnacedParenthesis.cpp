/* https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1/?track=ppc-stack&batchId=221 */

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to return if the paranthesis are balanced or not
bool ispar(string x)
{
    // Your code here
    stack<char> s; 
    char ch; 
  

    for (int i = 0; i < x.length(); i++) { 
        
        if (x[i] == '(' || x[i] == '[' || x[i] == '{') { 
            s.push(x[i]); 
            continue; 
        } 
        
     if (s.empty()) 
            return false; 
    
    
    if(x[i] == ')'){
        ch = s.top(); 
            s.pop(); 
            if (ch == '{' || ch == '[') 
                return false; 
    }
    else if(x[i] == '}'){
        ch = s.top(); 
            s.pop(); 
            if (ch == '(' || ch == '[') 
                return false; 
    }
    else if(x[i] == ']'){
        ch = s.top(); 
            s.pop(); 
            if (ch == '{' || ch == '(') 
                return false; 
    }
    }
    
    return (s.empty());
    
}


// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       if(ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends
