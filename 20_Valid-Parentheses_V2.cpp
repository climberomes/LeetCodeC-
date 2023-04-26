class Solution {
public:
    bool isValid(string s) {
        if (s.size()%2 == 1) return false;
        stack<char> myStack;
        for(char a : s)
        {
            if(a == ')'|| a == ']' || a == '}')
            {
                if(myStack.empty()) {return false;}
                else if (myStack.top() == '(' && a == ')') {myStack.pop();}
                else if (myStack.top() == '{' && a == '}') {myStack.pop();}
                else if (myStack.top() == '[' && a == ']') {myStack.pop();}
                else {return false;}
            }
            else if (a=='('|| a=='[' || a=='{')
            {
                myStack.push(a);
            }
        }

        return (myStack.empty()) ? true : false;
    }
};
