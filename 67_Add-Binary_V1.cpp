class Solution {
public:
    string addBinary(string a, string b) {
        string myOutput = "";
        int carryOver = 0, indxA = a.size()-1, indxB = b.size()-1;

        while(indxA > -1 || indxB > -1 || carryOver == 1)
        {
            if(indxA > -1)
            {
                carryOver += a[indxA] - '0';
                indxA--;
            }
            if(indxB > -1)
            {
                carryOver += b[indxB] - '0';
                indxB--;
            }
            myOutput = to_string(carryOver%2) + myOutput;
            carryOver /= 2;
        }

        return myOutput;
    }
};
