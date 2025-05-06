class Solution {
public:
    set<string>notIntegerOps={"C","D","+"};
    map<string,function<void(string,stack<int>&)>> ops = {
           {
             "C",[](string x , stack<int>&st) {
                st.pop();
            }
           },
            {
                 "D",[](string x, stack<int>&st) {
                st.push(st.top() * 2);
            }
            },
           {
             "+",[](string x , stack<int>&st) {
                int t1 = st.top();
                st.pop();
                int t2 = st.top();
                st.pop();
                int a = t1+t2;
                st.push(t2);
                st.push(t1);
                st.push(a);
            }
           },
           {
             "I",[](string x ,stack<int>&st) {
                st.push(stoi(x));
            }
           },
    };
    int calPoints(vector<string>& o) {
     stack<int>st;
     int ans =0;
     for(string &s:o) {
       if(notIntegerOps.count(s)) {
            ops[s](s,st);
       }else {
        ops["I"](s,st);
       }
     } 
     while(!st.empty()){
        ans+=st.top();
        st.pop();
     }

    return ans;
    }
};