class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)  
            return s;

        vector<string> myMap(numRows, "");

        bool direction = false;     //false is down
        int currRow = 0;

        for(int indx = 0; indx < s.size();indx++)
        {
            //insert to hashmap
            myMap[currRow] += s[indx];
            
            //if add row x (x,y)
            //else subtract row x and add 1 to column y (x,y)
            (!direction) ? currRow++ : currRow--;

            //Change direction if we exceed lower and positive bounds on next pass
            if(currRow + 1 >= numRows || currRow - 1 <= -1) {direction = !direction;}
        }
        
        string outStr;
        for(auto &it : myMap)  outStr += it;

        return outStr;
    }
};
