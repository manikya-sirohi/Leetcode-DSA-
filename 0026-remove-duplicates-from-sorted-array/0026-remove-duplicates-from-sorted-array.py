class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        i=0
        j=1
        n=1
        if(len(nums)==1): return n
        while(j<len(nums)):
            if(nums[i]==nums[j]):
                j+=1
            else:
                i+=1
                nums[i],nums[j]=nums[j],nums[i]
                j+=1
                n+=1
        return n
