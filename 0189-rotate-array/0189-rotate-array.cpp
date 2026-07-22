class Solution {
public:

    void rotation(vector<int> &nums, int start, int end)
    {
        while(start>end){
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end]= temp;
            start--;
            end++;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        if(nums.size()<=k);
        else{
            rotation(nums,nums.size()-1,nums.size()-k);
            rotation(nums,nums.size()-k-1,0);
            rotation(nums,nums.size()-1,0);
        }
    }
};