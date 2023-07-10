class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    stack<int> stack;

    for (string i : tokens) {
        if (i == "+" || i == "-" || i == "*" || i == "/") {
            int b = stack.top();
            stack.pop();
            int a = stack.top();
            stack.pop();

            if (i == "+")
                stack.push(a + b);
            else if (i == "-")
                stack.push(a - b);
            else if (i == "*") 
                stack.push(a * b);
            else if (i == "/") 
                stack.push(a / b);
            
        } else 
            stack.push(stoi(i));
        
    }

    return stack.top();
    }
};