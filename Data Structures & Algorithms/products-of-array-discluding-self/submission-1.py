class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:

        n= len(nums)
        if(n==1):
            return nums
        prod1 = [0]*n
        prod2 = [0]*n
        product = 1
        ans = [0]*n
        
        for i in range(0,n):
            product = product*nums[i]
            prod1[i] = product
        product = 1
        for i in range(n-1,-1,-1):
            product = product*nums[i]
            prod2[i] = product
        ans[0] = prod2[1]
        ans[n-1] = prod1[n-2]
        for i in range(1,n-1):
            ans[i] = prod1[i-1]*prod2[i+1]
        return ans



        