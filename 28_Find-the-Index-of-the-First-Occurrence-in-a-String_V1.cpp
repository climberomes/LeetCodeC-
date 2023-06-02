//Got this one with mininal retries
/*
Runtime
0 ms
Beats
100%
Memory
6.3 MB
Beats
23.80%
*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        int strLenDiff = haystack.length()-needle.length();
        string myWindow = "";
        for(int i=0; i<=strLenDiff; i++)
        {
            myWindow = haystack.substr(i,needle.length());
            if(myWindow == needle)
            {
                return i;
            }
        }

        return -1;
    }
};
