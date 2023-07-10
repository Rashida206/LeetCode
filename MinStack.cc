class MinStack {
private:
    stack<int> stack, minStack;
    
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stack.push(val);
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }
    
    void pop() {
        if (!stack.empty()) {
            if (stack.top() == minStack.top()) {
                minStack.pop();
            }
            stack.pop();
        }
    }
    
    int top() {
        if (!stack.empty()) {
            return stack.top();
        }
        return -1;
    }
    
    int getMin() {
        if (!minStack.empty()) {
            return minStack.top();
        }
        return -1; 
    }
};
