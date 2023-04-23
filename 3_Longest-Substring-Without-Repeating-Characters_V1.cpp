class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    unordered_map<string, int> wordCount;
    string leadString = "";
    string currentLongest = s.substr(0, 1);
    
    for (char c : s) {
        string letter(1, c); // create a string from the char
        if (wordCount.find(letter) == wordCount.end()) {
            wordCount[letter] = 1;
            leadString += letter;
            currentLongest = (currentLongest.length() < leadString.length())?leadString:currentLongest;
        } else {
            //found a duplicate
            wordCount[letter]++;
            int letterPosition = leadString.find(letter);
            
            //if duplicate is at the front of string, remove first letter
            if(letterPosition == 0)
            {
                leadString.erase(0,1);
                leadString += letter;
            }
            //Duplicate is at the end of substr
            else if(letterPosition == leadString.length()-1)
            {
                leadString = letter;
            }
            //if the duplicate is somewhere in the middle. remove it, but leave the rest
            else
            {
                leadString.erase(0,letterPosition+1);
                leadString += letter;
            }
            
            currentLongest = (currentLongest.length() < leadString.length())?leadString:currentLongest;
            
        }
    }

    return currentLongest.length();
}
};
