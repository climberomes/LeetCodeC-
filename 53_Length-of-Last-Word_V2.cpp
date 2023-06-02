// using stack
/*
Runtime
0 ms
Beats
100%
Memory
6.7 MB
Beats
7.69%
*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<char> myStr;
        
        for(int i = 0; i < s.length(); i++){myStr.push(s[i]);}

        while(myStr.top()== ' ') {
            myStr.pop();
            s.pop_back();
        }

        while(!myStr.empty() && myStr.top()!= ' '){myStr.pop();}

        cout << s.size() << endl;
        cout << myStr.size() << endl;

        return s.size()-myStr.size();
    }
};
