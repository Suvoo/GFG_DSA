#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends

class Solution
{   
public:
    vector<vector<int> > multiplyMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        // code here
        int row=A.size();
        int col=A[0].size();
        
        if(!(row>0 ))
        {
        return vector<vector<int>>();
        }

        if(!(col>0 ))
        {
        return vector<vector<int>>();
        }
        if(!(col==B.size()))
        {
        return vector<vector<int>>();
        }
        
        int c1=B[0].size();
        
    vector<vector<int>> ans(row,vector<int> (c1));

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            for(int k = 0; k < col; k++ )
                ans[i][j] += A[i][k] * B[k][j];
        }
    }
return ans;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > A(row); 
        for(int i=0; i<row; i++)
        {
            A[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>A[i][j];
            }
        }
        cin>> row>> col;
        vector<vector<int> > B(row);
        for(int i=0; i<row; i++)
        {
            B[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>B[i][j];
            }
        }
        Solution ob;
        vector<vector<int> > result = ob.multiplyMatrix(A,B);

        if(result.size() == 0)
            cout<<"-1";
        else
        {
            for (int i = 0; i < result.size(); ++i)
            {
                for (int j = 0; j < result[0].size(); ++j)
                {
                    cout<<result[i][j]<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
