class ExamRoom {
public:
    set<int>seats;
    int N;
    ExamRoom(int n) {
        N=n;
    }
    
    int seat() {
       if(seats.empty()){
            seats.insert(0);
            return 0;
       }
        int maxDist = *seats.begin();  // distance from 0 to first student
        int pos = 0;

        auto prev = *seats.begin();
        for (auto it = next(seats.begin()); it != seats.end(); ++it) {
            int dist = (*it - prev) / 2;
            if (dist > maxDist) {
                maxDist = dist;
                pos = prev + dist;
            }
            prev = *it;
        }

        // check distance from last student to N - 1
        if ((N - 1 - *seats.rbegin()) > maxDist) {
            pos = N - 1;
        }

        seats.insert(pos);
        return pos;
    }
    
    void leave(int p) {
       seats.erase(p);
    }
};

/**
 * Your ExamRoom object will be instantiated and called as such:
 * ExamRoom* obj = new ExamRoom(n);
 * int param_1 = obj->seat();
 * obj->leave(p);
 */