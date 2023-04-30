//
// For Window Problem consider the following
// Window start and end at same point
// when to move window vs when to resize it
// what variables to monitor
// condition for resizing and moving
// Maximum needs to be used and considered
// max() function
//
class Solution {
public:
    int characterReplacement(string s, int k) {
        if(s.size()<=k+1){return s.size();}
        int winStrt = 0, maxReoccurElem = 0, ans=0, curr_len = 0;
        unordered_map<char,int> myMap;                      //Hash map for window

        for(int winEnd = 0; winEnd<s.size();winEnd++)
        {
            myMap[s[winEnd]]++;                             //Increase letter count
            maxReoccurElem=max(MaxRepElem,myMap[s[winEnd]]);    //Max element weve seen reoccur in window

            curr_len=winEnd-winStrt+1;                      //Window Size cant exceed k from length of window and max reocurring
            if(curr_len-MaxRepElem>k)
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
