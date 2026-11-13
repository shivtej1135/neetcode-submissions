class Solution:
    def helper(self,mid,days,weights):
        sum = 0
        total = 0
        for i in range(0,len(weights)):
            sum = sum + weights[i]
            if(sum>mid):
                sum = weights[i]
                total = total + 1
        if(total<days):
            return True
        else:
            return False

    def shipWithinDays(self, weights: List[int], days: int) -> int:
        st = max(weights)
        end = sum(weights)
        ans = 0
        while(st<=end):
            mid = st + (end-st)//2
            ans_ = self.helper(mid,days,weights)
            if(ans_==True):
                ans = mid
                end = mid -1
            else:
                st = mid + 1
        return ans

        