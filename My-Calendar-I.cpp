class MyCalendar {
public:
    multiset<pair<int,int>>st;
    MyCalendar() {
        
    }
    
    bool book(int startTime, int endTime) {
        // for(auto p:st){
        //   if (!(endTime <= p.first || startTime >= p.second)) {
        //         // overlap exists
        //         return false;
        //     }
        // }
        // st.insert({startTime,endTime});
        // return true;
       if(!st.empty()) {
          auto it = st.lower_bound({startTime,0});
          if(it != st.end() && it->first < endTime)
                return false;
          if(it != st.begin()){
             auto p= prev(it);
             if(p->second > startTime)
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