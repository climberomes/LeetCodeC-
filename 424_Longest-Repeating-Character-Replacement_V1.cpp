class Solution {
public:
    int characterReplacement(string s, int k) {
        if(s.size()<=k+1){return s.size();}
        int winStrt = 0, MaxRepElem = 0, ans=0, curr_len = 0;
        unordered_map<char,int> myMap;                      //Hash map for window

        for(int winEnd = 0; winEnd<s.size();winEnd++)
        {
            myMap[s[winEnd]]++;                             //Increase letter count
            MaxRepElem=max(MaxRepElem,myMap[s[winEnd]]);    //Max between element in window and max we can replace

            curr_len=winEnd-winStrt+1;                      //Window Size cant exceed k
            if(curr_len-MaxRepElem>k)                       //If we exceed K the amount allowed to replace we have gone too far
            {
                myMap[s[winStrt]]--;                        //Window moves one less letter is allowed
                winStrt++;                                  //Move window up one
                curr_len=winEnd-winStrt+1;                  //Recalculate new size
            }
            ans=max(ans,curr_len);                          //Recalculate based on window size
        }

        return ans;
    }
};
