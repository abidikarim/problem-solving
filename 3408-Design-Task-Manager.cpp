class TaskManager {
public:
    unordered_map<int, pair<int, int>>task_info;
    set<pair<int, int>>task_priority;
    TaskManager(vector<vector<int>>& tasks) {
       for(auto &t:tasks){
            task_info[t[1]] = {t[0], t[2]};
            task_priority.insert({t[2], t[1]});
       }
    }
    
    void add(int userId, int taskId, int priority) {
       task_info[taskId] = {userId, priority};
       task_priority.insert({priority, taskId});
    }
    
    void edit(int taskId, int newPriority) {
        auto &task = task_info[taskId];
        task_priority.erase({task.second, taskId});
        task.second = newPriority;
        task_priority.insert({newPriority, taskId});        
    }
    
    void rmv(int taskId) {
        auto& task = task_info[taskId];
        task_priority.erase({task.second, taskId});
        task_info.erase(taskId);
    }
    
    int execTop() {
       if(task_info.empty())
            return -1;

        auto task = task_priority.rbegin();
        int userId = task_info[task->second].first;
        task_info.erase(task->second);
        task_priority.erase({task->first, task->second});
        return userId;
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