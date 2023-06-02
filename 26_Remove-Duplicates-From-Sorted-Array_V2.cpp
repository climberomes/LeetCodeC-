//have the current index save the last unique number. index it 1 so you can add the new unique value. only problem is original set is not clean.
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int myIndx = 0;
        for(int indx = 0; indx < nums.size();indx++)
        {
            if(nums[myIndx]!=nums[indx])
            {
                myIndx++;
                nums[myIndx]=nums[indx];
            }
        }
        return myIndx+1;
    }
};
