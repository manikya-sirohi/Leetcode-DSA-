class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        int i =0;
        int j = nums.size()-1;
        while(i<=j){
            if(nums[i]==val && nums[j]!=val){
                swap(nums[i],nums[j]);
                j--;
                i++;
                count++;
            }
            else if(nums[j]==val){
                j--;
                count++;
            }
            else{
                i++;
            }
        }
        return nums.size()-count;
    }
};