class Solution {
public:
    bool dfs(int node, vector<vector<int>>&graph, int dest, vector<bool>& vis){
        vis[node] = 1;
        if(node == dest)
            return 1;
        bool found = 0;
        for(auto child:graph[node]){
            if(!vis[child]){
                found |= dfs(child, graph, dest, vis);
            }
        }
        return found;
    }
    bool validPath(int n, vector<vector<int>>& e, int s, int d) {
       vector<vector<int>> graph(n);
       vector<bool> vis(n, 0);
       for(auto x:e){
            graph[x[0]].push_back(x[1]);
            graph[x[1]].push_back(x[0]);
       }
       return dfs(s,graph,d,vis);
    }
};