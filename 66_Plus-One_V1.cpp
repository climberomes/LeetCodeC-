class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size()-1;
        int carryOver = 0;
        
        if(len>=0){digits[len] = digits[len]+1;}
        else
            return {1};

        for(len; len >=0; len--)
        {
            carryOver += digits[len];
            digits[len] = carryOver%10;
            carryOver = carryOver / 10;
        }
        if(carryOver !=0)
        {
            digits.insert(digits.begin(),carryOver);
        }

        return digits;
    }
};
