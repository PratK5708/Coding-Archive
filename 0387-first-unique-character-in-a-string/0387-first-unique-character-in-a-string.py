class Solution(object):
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        n=len(s)
        if(n==0):
            return -1
        d= dict()
        
        for i in s:
            d[i]=d.get(i,0)+1

        for i in range(n):
            if d[s[i]]== 1:
                return i

        return -1