class Solution(object):
    def repeatedCharacter(self, s):
        """
        :type s: str
        :rtype: str
        """
        m=dict()
        for i in s:
            m[i]=m.get(i,0)+1
            if m[i]==2:
                return i
        return 9