class TaskManager {
public:
    map<int,pair<int,int>>mp;
    set<vector<int>>st;
    TaskManager(vector<vector<int>>& tasks) {
        for(auto t:tasks){
            mp[t[1]]={t[0],t[2]};
            st.insert({t[2],t[1],t[0]});
        }
    }
    
    void add(int userId, int taskId, int priority) {
        if(mp.find(taskId) == mp.end()){
            mp[taskId]={userId,priority};
            st.insert({priority,taskId,userId});
        }
    }
    
    void edit(int taskId, int newPriority) {
        st.erase({mp[taskId].second,taskId,mp[taskId].first});
        st.insert({newPriority,taskId,mp[taskId].first});  
        mp[taskId].second = newPriority;

    }
    
    void rmv(int taskId) {
        st.erase({mp[taskId].second,taskId,mp[taskId].first});
        mp.erase(taskId);
    }
    
    int execTop() {
        if(!st.empty()){
            auto v = *st.rbegin();
            st.erase(v);
            mp.erase(v[1]);
            return v[2];
        }

        return -1;
    }
};

/**
 * Your TaskManager object will be instantiated and called as such:
 * TaskManager* obj = new TaskManager(tasks);
 * obj->add(userId,taskId,priority);
 * obj->edit(taskId,newPriority);
 * obj->rmv(taskId);
 * int param_4 = obj->execTop();
 */