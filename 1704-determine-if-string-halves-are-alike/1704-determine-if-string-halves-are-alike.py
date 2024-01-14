class Solution(object):
    def halvesAreAlike(self, s):
        """
        :type s: str
        :rtype: bool
        """
        #l=["a","e","o","i","u"]
        vowels = set("aeiouAEIOU")
        even=len(s)/2
        first=[]
        second=[]
        for i in range(len(s)):
            if(i<even):
               first.append(s[i])
            else:
                second.append(s[i])
        cfirst = sum(1 for char in first if char in vowels)
        csecond = sum(1 for char in second if char in vowels)

        return cfirst==csecond