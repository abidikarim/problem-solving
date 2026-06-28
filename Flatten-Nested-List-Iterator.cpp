1/**
2 * // This is the interface that allows for creating nested lists.
3 * // You should not implement it, or speculate about its implementation
4 * class NestedInteger {
5 *   public:
6 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
7 *     bool isInteger() const;
8 *
9 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
10 *     // The result is undefined if this NestedInteger holds a nested list
11 *     int getInteger() const;
12 *
13 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
14 *     // The result is undefined if this NestedInteger holds a single integer
15 *     const vector<NestedInteger> &getList() const;
16 * };
17 */
18
19class NestedIterator {
20public:
21    queue<int>ans;
22    void get(vector<NestedInteger> &v){
23        for(int i=0; i<v.size(); i++){
24            if(v[i].isInteger())
25                ans.push(v[i].getInteger());
26            else
27                get(v[i].getList());
28        }
29    }
30    NestedIterator(vector<NestedInteger> &nestedList) {
31        get(nestedList);
32    }
33    
34    int next() {
35        int x = ans.front();
36        ans.pop();
37        return x;
38    }
39    
40    bool hasNext() {
41        return !ans.empty();
42    }
43};
44
45/**
46 * Your NestedIterator object will be instantiated and called as such:
47 * NestedIterator i(nestedList);
48 * while (i.hasNext()) cout << i.next();
49 */