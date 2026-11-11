
class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s1) > len(s2):
            return False

        mp = {}
        mp1 = {}
        right = 0
        left = 0
        n = len(s1)

        for i in range(0, len(s1)):
            mp[s1[i]] = mp.get(s1[i], 0) + 1

        while right < len(s2):
            while right < len(s2) and right-left+1 <= len(s1):
                mp1[s2[right]] = mp1.get(s2[right], 0) + 1
                right = right + 1

            if len(mp1) > 0 and mp == mp1:
                return True

            mp1[s2[left]] = mp1.get(s2[left], 0) - 1

            if mp1[s2[left]] == 0:
                del mp1[s2[left]]

            left = left + 1

        return False

        
        


        