class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        if len(people)==1:
            return 1
        people.sort()
        ans = 0
        right = len(people) - 1
        left = 0
        while(left<right):
            if(people[right]+people[left]<=limit):
                ans = ans + 1
                right = right - 1
                left = left + 1
            else:
                ans = ans + 1
                right = right - 1
            if(left==right):
                ans+=1
        return ans
            
        