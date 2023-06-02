//Best run time. better memory
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size();
        //check the edge cases
        if(target<= nums[start])
        {
            return start;
        }
        else if (target > nums[end-1])
        {
            return end;
        }

        //"binary search" within 
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] > target)
                end = mid - 1;
            else if (nums[mid] < target)
                start = mid + 1;
            else
                return mid;
        }
        return start;
    }
};
