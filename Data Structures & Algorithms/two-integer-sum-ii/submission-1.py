class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        mp = {}
        ans = []
        for i in range(0,len(numbers)):
            if target - numbers[i] in mp:
                
                ans.append(mp[target-numbers[i]]+1)
                ans.append(i+1)
            mp[numbers[i]] = i
        return ans



        