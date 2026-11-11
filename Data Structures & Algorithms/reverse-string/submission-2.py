class Solution:
    def reverseString(self, s: List[str]) -> None:
        n = len(s) - 1
        left = 0
        right = n 
        while(left<right):
            s[left],s[right] = s[right],s[left]
            right = right - 1
            left = left + 1
        return s
        