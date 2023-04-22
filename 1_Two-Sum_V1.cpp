class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> myMap;                   //faster lookup
        vector<int> returnIndex;                        //return the indexes
        for(int i = 0; i < nums.size(); i++)
        {
            int compliment = target - nums[i];          //we are looking for two numbers
            if(myMap.find(compliment) != myMap.end())   //cant be the end of the search
            {
                returnIndex.push_back(myMap[compliment]);
                returnIndex.push_back(i);
                return returnIndex;
            }

            myMap[nums[i]] = i;
        }

        return returnIndex;
    }
};
