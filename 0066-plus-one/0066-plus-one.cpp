class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size(), ans, remainder, addend;
    for (int i = n - 1; i >= 0; i--)
    {
        if(i==(n-1)){
            ans = digits[i] + 1;
        }
        else{
            ans += digits[i];
        }
        remainder = ans % 10;
        addend = ans / 10;
        digits[i] = remainder;
        ans = addend;
        // cout<<digits[i]<<" ";
        if (i == 0 && addend != 0)
        {
            digits.insert(digits.begin(), addend);
        }
    }
        return digits;
    }
};