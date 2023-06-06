class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> myLetters;

        for(char a : magazine)
            myLetters[a]++;

        for(char a : ransomNote)
        {
            if(myLetters[a]>0) myLetters[a]--;
            else return false;
        }

        return true;
    }
};
