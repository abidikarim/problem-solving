class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int n = emails.size();
        set<string>st;
        for(string email:emails){
            int p = email.find('@');
            string domain = email.substr(p);
            string local = email.substr(0,p);
            if(local.find('+') != string::npos){
                local = local.substr(0, local.find('+'));
            }
            if(local.find('.') != string::npos){
                local.erase(remove(local.begin(), local.end(),'.'), local.end());
            }
        
            st.insert(local+domain);
                
        }
        return st.size();
    }
};