class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        n = len(nums)
        right = 0
        left = 0
        ans =float('inf')
        sum = 0
        while(right<n):
            sum = sum + nums[right]
            right = right + 1
            while(sum>=target):
                ans = min(ans,right - left+1)
                sum = sum - nums[left]
                left = left + 1
        if(ans ==float('inf') ):
            return 0
        return ans-1

        