class Solution(object):
    def backspaceCompare(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        
        stack=[]
        for char in s:
            if 0<len(stack) and char== '#':
                stack.pop()

            elif char.isalpha():
                stack.append(char)

        stackt=[]
        for char in t:
            if 0 <len(stackt) and char == '#':
                stackt.pop()

            elif char.isalpha():
                stackt.append(char)

        return stack==stackt