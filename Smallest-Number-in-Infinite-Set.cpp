class SmallestInfiniteSet {
public:
    set<int>st;
    int current =0;
    SmallestInfiniteSet() {
        current =1;
    }
    
    int popSmallest() {
        if(!st.empty()){
            int x=*st.begin();
            st.erase(st.begin());
            return x;
        }
        return current++;
    }
    
    void addBack(int num) {
        if(num < current)
            st.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */