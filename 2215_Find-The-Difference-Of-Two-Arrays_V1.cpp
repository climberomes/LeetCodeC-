//unordered set works that it organizes all distinct numbers
// SO an unordered set does not allow duplicate values
// also the count is direct in an unordered set
//
// with vector you have to use count(x.begin(),x.end(),val)
// for this example that wont quiet work
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        
        vector<int> v1, v2;
        for(auto num: s1)
            if(!s2.count(num))
                v1.push_back(num);
        
        for(auto num: s2)
            if(!s1.count(num))
                v2.push_back(num);
        
        return {v1, v2};
    }
};
