/* https://practice.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1/?track=ppc-matrix&batchId=221 */

#include<bits/stdc++.h> 
using namespace std;
bool search(vector<vector<int> > matrix, int n, int m, int x) ;
int main() 
{ 
	int t;
    cin>>t;
    while(t--)
    {

 		int n, m;
    	cin>> n>> m;
        vector<vector<int> > matrix(n);
            
        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        int x;
        cin>>x;

        if (search(matrix,n,m,x)) 
            cout << "1\n"; 
        else
            cout << "0\n"; 
    }
	return 0; 
} 

// } Driver Code Ends




bool search(vector<vector<int> > arr, int n, int m, int x) 
{
    // code here 
    for(int i=0;i<n;i++) 
    if(x>=arr[i][0] && x<=arr[i][m-1])
        return binary_search(arr[i].begin(),arr[i].end(),x);
        
        return false;
}
