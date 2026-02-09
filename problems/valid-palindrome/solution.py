class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        string=' '.join(c.lower() for c in s if c.isalnum())
        return string[::-1]==string