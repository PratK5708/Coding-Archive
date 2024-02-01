class Solution(object):
    def countTriples(self, n):
        """
        :type n: int
        :rtype: int
        """
        res = 0

        for i in range(1, n):
            for j in range(i + 1, n):
                s = math.sqrt(i * i + j * j)
                if int(s) == s and s <= n:
                    res += 2

        return res
        