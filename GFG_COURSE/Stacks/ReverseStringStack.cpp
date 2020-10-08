/* https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1/?track=ppc-stack&batchId=221 */

#include<bits/stdc++.h>
using namespace std;
void reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        reverse(str,len);
        cout<<str;
        cout<<endl;
    }
        return 0;
}

void reverse(char *str, int len)
{
    stack <char> s;
    
    for(int i=0; i<len; i++){
        s.push(str[i]);
    }
    
    for(int i=0; i<len; i++){
        str[i] = s.top();
        s.pop();
    }
    
}
