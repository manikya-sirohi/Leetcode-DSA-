class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique =0, check =0,count = 1;

        while(check<(nums.size())){
            if(nums[unique]== nums[check]) check++;
            else {
                unique++;
                int temp =nums[unique];
                nums[unique]= nums[check];
                nums[check]= temp;
                check++;
                count++;
            }
        }
        return count;
    }
};