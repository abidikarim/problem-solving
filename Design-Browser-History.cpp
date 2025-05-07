class BrowserHistory {
public:
    stack<string>current;
    stack<string>next;
    BrowserHistory(string homepage) {
        this->current.push(homepage);
    }
    
    void visit(string url) {
        this->current.push(url);
        this->next = stack<string>();
    }
    
    string back(int steps) {
     while(steps-- && current.size() > 1) {
            this->next.push(this->current.top());
            this->current.pop();
     }   
     return this->current.top();
    }
    
    string forward(int steps) {
        if(this->next.empty()) return this->current.top();
        while(steps-- && !this->next.empty()) {
            this->current.push(this->next.top());
            this->next.pop();
        }
        return this->current.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */