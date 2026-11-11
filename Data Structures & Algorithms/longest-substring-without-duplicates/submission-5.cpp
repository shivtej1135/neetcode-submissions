class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int right = 0;
        int left = 0;
        unordered_set<char>mp;
        int ans=0;
        while(right<s.length()){
            if(mp.find(s[right])==mp.end()){
                mp.insert(s[right]);
                right++;
                ans=max(ans,right-left);
            }
            else{
                    mp.erase(s[left]);
                    left++;
                }
            }
        

        return ans;
    }
};
