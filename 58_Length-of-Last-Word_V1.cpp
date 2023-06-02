//
/*
Runtime
2 ms
Beats
51.47%
Memory
6.5 MB
Beats
48.5%
*/
class Solution {
public:
    int lengthOfLastWord(string s) {
        string endWord = "";
        reverse(s.begin(), s.end());

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] != ' ')
            {
                endWord += s[i];
            }
            else if(s[i] == ' ' && endWord.size() > 0)
            {
                break;
            }
        }
        return endWord.size();
    }
};
