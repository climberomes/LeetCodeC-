//very similar to #26
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int myIndx = 0;
        for(int indx = 0; indx < nums.size();indx++)
        {
            if(nums[indx] != val)
            {
                nums[myIndx] = nums[indx];
                myIndx++;
            }
        }
        return myIndx;
    }
};
