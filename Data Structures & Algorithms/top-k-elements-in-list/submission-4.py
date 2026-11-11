class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mp = {}
        ans = []
        for i in range(0,len(nums)):
            mp[nums[i]] = mp.get(nums[i],0) + 1
        arr = sorted(mp.items(), key=lambda x: x[1], reverse=True)
        n = len(mp) - 1
        for i in range(k):
            ans.append(arr[i][0])
        return ans

        
        