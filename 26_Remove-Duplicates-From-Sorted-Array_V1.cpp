//brute force way. Save unique values in a new array.
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> myNums;
        for(int indx = 0; indx < nums.size();indx++)
        {
            if(find(myNums.begin(),myNums.end(),nums[indx])==myNums.end())
            {
                myNums.push_back(nums[indx]);
            }
        }
        nums = myNums;
        return myNums.size();
    }
};
