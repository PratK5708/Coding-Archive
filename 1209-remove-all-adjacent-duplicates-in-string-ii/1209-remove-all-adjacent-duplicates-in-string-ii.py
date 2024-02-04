class Solution(object):
    def removeDuplicates(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        # stack=[]
        # for i in s:
        #     if not(s):
        #         s.append([i, 1])
        #         top += 1
        #     elif ch == stack[top][0][0]:
        #             stack[top][0] += ch
        #             stack[top][1] += 1
        #     else:
        #             stack.append([ch, 1])
        #             top += 1
        # return stack
        
        r = []  
        t = -1

        for c in s:
            if not r or c != r[t][0][0]:
                r.append([c, 1])
                t += 1
            else:
                if c == r[t][0][0] and r[t][1] + 1 == k:
                    r.pop()
                    t -= 1
                elif c == r[t][0][0]:
                    r[t][0] += c
                    r[t][1] += 1
                else:
                    r.append([c, 1])
                    t += 1

        ans = ''.join(ch[0] for ch in r)
        return ans