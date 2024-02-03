class Solution(object):
    def maxSumAfterPartitioning(self, arr, k):
        """
        :type arr: List[int]
        :type k: int
        :rtype: int
        """
        n=len(arr)
        dp=[0]*(n+1)
        for i in range(0,n+1):
            maxi =-1
            ans=0
            for j in range(1,k+1):
                if i-j>=0 :
                    maxi=max(maxi,arr[i-j])
                    tmp=dp[i-j]+(maxi*j)
                    ans=max(tmp,ans)
            dp[i]=ans
        
        return dp[n]