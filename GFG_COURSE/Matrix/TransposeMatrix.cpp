/*  https://practice.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1/?track=ppc-matrix&batchId=221 */


#include <bits/stdc++.h> 
using namespace std; 
]
class Solution
{   
public:     
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        // code here 
        vector<vector<int>> v(n);
        for(int i = 0 ; i < n ; i++) {
            v[i].assign(n, 0);
            for(int j = 0 ; j < n ; j++) {
                    v[i][j] = matrix[j][i];
            }
        }
    matrix = v;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.transpose(matrix,n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
