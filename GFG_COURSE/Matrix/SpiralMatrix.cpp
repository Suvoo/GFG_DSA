/* https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1/?track=ppc-matrix&batchId=221 */

/* https://www.youtube.com/watch?v=1ZGJzvkcLsA */



#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends

class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> >arr, int row, int col) 
    {
        vector <int> ans;
        int t=0;int l=0;
        int b=arr.size()-1;
        int r=arr[0].size()-1;
        int d=0;
        while(t<=b && l<=r)
        {
            if(d==0)
            {
                for(int i=l;i<=r;i++)    ans.push_back(arr[t][i]);
                t++;
            }
            else if(d==1)
            {
                for(int i=t;i<=b;i++)    ans.push_back(arr[i][r]);
                r--;
            }
            else if(d==2)
            {
                for(int i=r;i>=l;i--)   ans.push_back(arr[b][i]);
                b--;
            }
            else if(d==3)
            {
                for(int i=b;i>=t;i--)   ans.push_back(arr[i][l]);
                l++;
            }
            d=(d+1)%4;
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
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
