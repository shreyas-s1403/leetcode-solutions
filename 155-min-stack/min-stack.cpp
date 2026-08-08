class MinStack {
public:
    stack<pair<int,int>>nums;
    MinStack() {
    }
    
    void push(int value) {
        if (nums.empty()) nums.push({value,value});
        
        else{
            int currmin=min(value,nums.top().second);
            nums.push({value,currmin});
        } 
    }
    
    void pop() {
        nums.pop();
    }
    
    int top() {
        return nums.top().first;
    }
    
    int getMin() {
        return nums.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */