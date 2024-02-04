class Solution(object):
    def minOperations(self, logs):
        """
        :type logs: List[str]
        :rtype: int
        """
        res=0
        for i in logs:
            if i== "../":
                if res:
                    res -= 1
                else:
                    continue
            elif i == "./":
                continue 
            else:
                res += 1
        return res
    
    
    
    
    
    
    
        stack=[]
        for i in logs:
            if i== "../" and stack:
                stack.pop()
            elif i== "./":
                continue
            else:
                stack.append(i)
        return len(stack)

        