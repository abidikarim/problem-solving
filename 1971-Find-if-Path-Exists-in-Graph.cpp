class Solution {
public:
    void dfs(vector<vector<int>>& graph,vector<bool>& vis, int source){
        vis[source] = true;

        for(auto& child:graph[source]){
            if(!vis[child])
                dfs(graph, vis, child);
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<bool>vis(n, 0);
        vector<vector<int>>graph(n);
        for(auto edge:edges){
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        dfs(graph, vis, source);
        return vis[destination];
    }
};