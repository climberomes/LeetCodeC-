class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        
        string temp = to_string(x);
        reverse(temp.begin(), temp.end());
        int reversed = stol(temp);

        return (x == reversed) ? true : false;

    }
};
