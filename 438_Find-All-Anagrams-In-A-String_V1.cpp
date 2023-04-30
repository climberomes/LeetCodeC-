//exceeded runtime on one of the test cases but i wanted to save my solution
class Solution {
public:
    bool isAnagram(string s, vector<int> &p) {
        vector<int> checkA(26,0);
        for(auto &a:s)
        {
            checkA[a-'a']++;
        }

        for(int i = 0; i<26;i++)
        {
            if(checkA[i] != p[i]){return false;}
        }
        return true;
    }

    vector<int> findAnagrams(string s, string p) {
        if(p.size()>s.size())   return {};

        vector<int> vec_P(26,0);
        vector<int> rtnArr = {};

        for(auto &a:p)
        {
            vec_P[a-'a']++;
        }

        for(int winStrt = 0; winStrt<=s.size()-p.size();winStrt++)
        {
            if(isAnagram(s.substr(winStrt,p.size()),vec_P))
            {
                rtnArr.push_back(winStrt);
            }
      
