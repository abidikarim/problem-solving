class NumberContainers {
public:
    map<int,int>num_by_id;
    map<int,set<int>>num_ids;
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
       if(num_by_id.count(index)) {
            int old_number = num_by_id[index];
            // Remove the index from the old number's set
            num_ids[old_number].erase(index);
            // If the set becomes empty, erase the number entry
            if (num_ids[old_number].empty()) {
                num_ids.erase(old_number);
            }
       } 
       num_by_id[index] = number;
       num_ids[number].insert(index);
    }
    
    int find(int number) {
      if(num_ids.count(number)) {
        return *num_ids[number].begin();
      }  
      return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */