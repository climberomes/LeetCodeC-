
        int len = nums1.size();
        if(len == 0)
        {
            return 0.0;
        }
        else if (len == 1)
        {
            return nums1[0];
        }
        else if (len == 2)
        {
            return (nums1[0] + nums1[1])/ 2.0;
        }
        else if (len%2 == 0)
        {
            return (nums1[floor(len/2.0)-1] + nums1[ceil(len/2.0)]) / 2.0;
        }
        else if (len%2 == 1)
        {
            return nums1[floor(len/2.0)];
        }
        else
        {
            return 0.0;
        }
    }
};
