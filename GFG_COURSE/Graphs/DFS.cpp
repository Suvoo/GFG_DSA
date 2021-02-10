/* REFERENCE : https://youtu.be/gHkOhnINlZo */
/* check alternate with stack function  on GFG*/


 // } Driver Code Ends


class Solution {
public:

    void dfshelp(vector<int> adj[],int s,bool visited[],vector<int> &result){
        
	    visited[s] = true;
	    result.push_back(s);
	    for(auto x : adj[s]){
		    if (visited[x]==false){
		    	dfshelp(adj,x,visited,result);
		}
	}
}
	vector<int>dfsOfGraph(int V, vector<int> adj[]){
	    // Code here
	    bool visited[V];
        vector<int>result;
        
        for(int i=0;i<V;i++){
	        visited[i] = false;
        }
        dfshelp(adj,0,visited,result);
        return result;
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
    		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.dfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
