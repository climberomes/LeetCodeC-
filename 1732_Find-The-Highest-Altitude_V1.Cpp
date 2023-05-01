class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int myMax = 0, currAlt = 0;
        for(int i = 0;i<gain.size();i++)
        {
            currAlt += gain[i];
            myMax = max(myMax,currAlt);
        }

        return myMax;
    }
};
