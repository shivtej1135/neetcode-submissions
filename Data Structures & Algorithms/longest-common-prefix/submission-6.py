class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        ans = ""
        for i in range(0,len(strs[0])):
            char = strs[0][i]
            for j in range(1,len(strs)):
                if(i>=len(strs[j])):
                    return ans
                if(char!=strs[j][i]):
                    return ans
            ans = ans + char
        return ans

        