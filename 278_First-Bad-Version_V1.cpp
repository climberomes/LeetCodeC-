// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 0, end = n, mid = 0;
        while(start<=end)
        {
            mid = start + ((end-start)/2);

            if(isBadVersion(mid))
            {
                end = mid-1;
            }
            else if(isBadVersion(mid+1))
            {
                return mid+1;
            }
            else
            {
                start = mid+1;
            }
        }
        return mid;
    }
};
