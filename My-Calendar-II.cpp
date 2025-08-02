class MyCalendarTwo {
public:
    map<int,int>prefix;
    MyCalendarTwo() {
        
    }
    
    bool book(int startTime, int endTime) {
        prefix[startTime]++;
        prefix[endTime]--;
        int prev=0;
        for(auto &a:prefix){
            prev+=a.second;
            if(prev > 2){
                prefix[startTime]--;
                prefix[endTime]++;
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(startTime,endTime);
 */