class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        right = 0
        left = 0
        mp = set()

        while(right < len(nums)):
            if right - left > k:
                mp.discard(nums[left])
                left += 1

            if nums[right] in mp:
                return True

            mp.add(nums[right])
            right += 1

        return False
                    
        