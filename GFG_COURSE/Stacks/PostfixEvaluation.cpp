/* https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1/?track=ppc-stack&batchId=221 */

// C++ program to evaluate value of a postfix expression
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;


// The main function that returns value of a given postfix expression
int evaluatePostfix(string &str)
{
    // Your code here
    stack<int> s;
    
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            s.push(str[i]-'0'); // push numbers
        }
        else
        {
            int n1 = s.top();
            s.pop();
            
            int n2 = s.top();
            s.pop();
            
            if(str[i] == '*')
            {
                s.push(n1*n2);
            }
            else if(str[i] == '/')
            {
                s.push(n2/n1);
            }
            else if(str[i] == '+')
            {
                s.push(n1+n2);
            }
            else if(str[i] == '-')
            {
                s.push(n2-n1);
            }
        }
    }
    
    return s.top();
    
}


// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string str;
        cin>>str;
    
    cout<<evaluatePostfix(str)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
