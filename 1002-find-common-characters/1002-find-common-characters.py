class Solution(object):
    def commonChars(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        cou = list(words[0])
        res = []
        for char in cou:
            f = True
            for j in range(1, len(words)):
                if char in words[j]:
                    words[j] = words[j].replace(char, '', 1)
                else:
                    f = False
                    break
            if f:
                res.append(char)
        return res
        