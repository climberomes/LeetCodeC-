// Solution did not work. not efficient.
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i = 0; i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                nums.push_back(0);
                nums.erase(nums.begin() + i);
                //i--;
            }
        }


    }
};
