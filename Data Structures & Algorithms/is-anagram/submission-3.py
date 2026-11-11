class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        mp = {}
        for x in s :
            mp[x] = mp.get(x,0) + 1
        for x in t :
            mp[x] = mp.get(x,0) - 1
        for key in mp:
            if(mp[key]!=0):
                return False
        return True
        