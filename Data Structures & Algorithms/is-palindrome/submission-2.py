class Solution:
    def isPalindrome(self, s: str) -> bool:
        n = len(s) - 1
        right = n
        left = 0
        s = s.lower()

        while(left <= right):

            while(left <= right and not s[left].isalnum()):
                left += 1

            while(left <= right and not s[right].isalnum()):
                right -= 1

            if(left > right):
                break

            if(s[left] != s[right]):
                return False

            left = left + 1
            right = right - 1

        return True
        