class Solution {
public:
    void dfs(vector<vector<int>>& graph, vector<bool>& vis, int node){
        vis[node] = 1;
        for(auto &child:graph[node]){
            if(!vis[child])
                dfs(graph, vis, child);
        }

    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>graph(n);
        vector<bool>vis(n, 0);

        for(int i=0; i<edges.size(); i++){
            int x = edges[i][0];
            int y = edges[i][1];

            graph[x].push_back(y);
            graph[y].push_back(x);
        }

        dfs(graph, vis, source);
        return vis[destination];
    }
};