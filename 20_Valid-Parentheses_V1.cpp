class Solution {
public:
    bool isValid(string s) {
        if (s.size()%2 == 1) return false;
        stack<char> myStack;
        char element = NULL;
        for(char a : s)
        {
            element = (myStack.empty()) ? NULL : myStack.top();
            
            if(a == ')'|| a == ']' || a == '}')
            {
                if(myStack.empty()) {return false;}
                else if (element == '(' && a == ')') {myStack.pop();}
                else if (element == '{' && a == '}') {myStack.pop();}
                else if (element == '[' && a == ']') {myStack.pop();}
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
