class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        k = k%len(nums)
        nums.reverse()
        
        nums[:] = nums[:k][::-1] + nums[k:][::-1]
        return nums
        
        