class Solution {
public:
    bool dfs(int p, vector<vector<int>> &g, int &y, vector<bool>& vis){
        vis[p]=1;
        if(p ==y) return true;
        bool found= false;
        for(auto c:g[p]){
            if(!vis[c])
                found |= dfs(c,g,y,vis);
        }
        return found;
    }
    bool validPath(int n, vector<vector<int>>& e, int s, int d) {
        vector<vector<int>> graph(n);
        vector<bool>vis(n, 0);

        for(int i=0; i<e.size(); i++){
            int x= e[i][0];
            int y= e[i][1];
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        return dfs(s,graph,d,vis);
    }
};