class Solution(object):
    def sumCounts(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n=len(nums)
        
        def count(l):
            s=set(l)
            return len(s)**2
        
        res=0
        for i in range(n):
            for j in range(i+1,n+1):
                res +=count(nums[i:j])
        
        return res
        