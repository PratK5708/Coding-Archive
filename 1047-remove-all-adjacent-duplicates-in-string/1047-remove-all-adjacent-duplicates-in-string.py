class Solution(object):
    def removeDuplicates(self, s):
        """
        :type s: str
        :rtype: str
        """
        text=[]
        for i in range(len(s)):
            if text and text[-1] == s[i]:
                text.pop(-1)
            else:
                text.append(s[i])
                
        return ''.join(text)