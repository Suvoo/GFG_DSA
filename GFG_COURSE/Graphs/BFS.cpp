/* REFERENCE : https://youtu.be/7VlwS1XRStY */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
public:
	vector<int>bfsOfGraph(int V, vector<int> adj[]){
	    // Code here
	    bool visited[V];
        for(int i = 0; i < V; i++)
            visited[i] = false;

        queue<int> q;vector<int> v;
        int temp=0;

        visited[0] = true;
        q.push(0);

        while(!q.empty()){
	        temp =  q.front();
	        q.pop();
	        v.push_back(temp);
	        
	        for(auto node : adj[temp]){
		        if(!visited[node]){
		            q.push(node);
		            visited[node]=true;
		        }
	        }
        }
        return v;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    // 		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.bfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
