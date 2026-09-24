class Solution {
public:
    int summ (int n){
        int sum =0;
        while(n>0){
            sum+=(n%10);
            n/=10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int index = -1;
        for(int i =0; i<nums.size();i++){
            if(summ(nums[i])==i){
                index = i;
                break;
            }
        }
        return index;
    }
};