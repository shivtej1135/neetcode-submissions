class Solution:
    def helper(self,mid,piles,h):
        curr = 0
        for i in range(0,len(piles)):
            if(mid>=piles[i]):
                curr = curr + 1
            else:
                if(piles[i]%mid==0):
                    curr = curr + piles[i]//mid
                else:
                    curr = curr + piles[i]//mid + 1
        if(curr<=h):
            return True
        return False
            

    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        st = 1
        end = max(piles)
        ans = 0
        while(st<=end):
            mid = st + (end-st)//2
            ans_ = self.helper(mid,piles,h)
            if(ans_==True):
                ans = mid
                end = mid -1
            else:
                st = mid + 1
        return ans
        