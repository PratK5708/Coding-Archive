class Solution(object):
    def lengthOfLastWord(self, s):
        words = s.split()
        if not words:
            return 0
        last_word=words[-1]
        return len(last_word)
