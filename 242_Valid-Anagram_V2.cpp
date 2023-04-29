class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char,int> lookUpTable;
        for(int i =0; i < s.size();i++)
        {
            lookUpTable[s[i]]++;
            lookUpTable[t[i]]--;
        }
        for(auto value : lookUpTable)
            if(value.second) return false;
        return true;
    }
};
