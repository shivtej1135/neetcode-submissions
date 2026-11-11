class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        mp =set()
        for i in range(0,len(nums)):
            mp.add(nums[i])
        ans = 0
        for i in range(0,len(nums)):
            x= nums[i]
            if x-1 not in mp:
                currLength = 1
                while(x+1 in mp):
                    currLength = currLength + 1
                    x = x + 1
                ans = max(ans,currLength)
        return ans

        
            

        