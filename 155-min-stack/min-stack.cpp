class MinStack {
public:
    vector<int>nums;
    vector<int>minimum;
    MinStack() {
    }
    
    void push(int value) {
        nums.push_back(value);
        if (minimum.empty() || value<=minimum.back()) minimum.push_back(value);
        else minimum.push_back(minimum.back());
    }
    
    void pop() {
        nums.erase(nums.begin()+nums.size()-1);
        minimum.pop_back();
    }
    
    int top() {
        return nums[nums.size()-1];
    }
    
    int getMin() {
        return minimum.back();
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