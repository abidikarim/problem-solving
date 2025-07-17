class MyCalendar {
public:
    multiset<pair<int,int>>st;
    MyCalendar() {
        
    }
    
    bool book(int startTime, int endTime) {
        for(auto p:st){
          if (!(endTime <= p.first || startTime >= p.second)) {
                // overlap exists
                return false;
            }
        }
        st.insert({startTime,endTime});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */