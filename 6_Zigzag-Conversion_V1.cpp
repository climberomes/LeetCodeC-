class Solution {
public:
    string convert(string s, int numRows) {
        unordered_map<int,string> myMap;
        bool direction = false;     //false is down
        int currRow = 0;
        
        if(s.size()<=1 || numRows==1)
        {
            return s;
        }

        for(int indx = 0; indx <= s.size()-1;indx++)
        {
            //insert to hashmap
            myMap[currRow] += s.substr(indx,1);
            
            //if add row x (x,y)
            //else subtract row x and add 1 to column y (x,y)
            (!direction) ? currRow++ : currRow--;
            
            //Change direction if we exceed lower and positive bounds on next pass
            if(currRow + 1 >= numRows || currRow - 1 <= -1) {direction = !direction;}
        }
        
        for(currRow = 0; currRow < numRows; currRow++)
        {
            myMap[numRows+1] += myMap[currRow];
        }
        
        return myMap[numRows+1];
    }
};
