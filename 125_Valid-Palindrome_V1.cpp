//Using Regex Class
//Has terrible runtime
class Solution {
public:
    bool isPalindrome(string s) {
        //regex remNW("\\W+");
        //s = regex_replace(s, remNW, "");
        regex removeNoAlum("[^[:alnum:]]"); // regular expression for non-alphanumeric characters
        s = regex_replace(s, removeNoAlum, ""); // replace non-alphanumeric characters with empty string
    
        for (int i = 0; i < s.size(); i++) {s[i] = tolower(s[i]);}
        string s2 = s;
        reverse(s.begin(), s.end());
        return (s==s2) ? true : false;
    }
};
