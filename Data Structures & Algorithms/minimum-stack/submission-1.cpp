class MinStack {
public:
    vector<int>st,mnst;
    MinStack() {
    }
    
    void push(int val) {
        if(st.empty() || mnst.back()>=val)mnst.push_back(val);
        st.push_back(val);
    }
    
    void pop() {
        if(st.back()==mnst.back())mnst.pop_back();
        st.pop_back();
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        return mnst.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */