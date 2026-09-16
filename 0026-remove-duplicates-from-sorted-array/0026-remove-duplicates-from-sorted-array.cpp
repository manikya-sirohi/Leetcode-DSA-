class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=1,i=0,j=i+1;
        while(j!=nums.size()){
            if(nums[j]==nums[i]) j++;
            else{
                i++;
                swap(nums[i],nums[j]);
                j++;
                n++;
            }
        }
        return n;
    }
};