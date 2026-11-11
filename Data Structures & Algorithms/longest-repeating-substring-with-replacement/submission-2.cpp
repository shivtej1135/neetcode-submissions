class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int right = 0;
        unordered_map<char,int> mp;
        int ans = 0;
        int maxFreq = 0;
        while(right<s.length()){
            mp[s[right]]++;
            maxFreq = max(maxFreq,mp[s[right]]);
            right++;
            while(right-left-maxFreq>k){
                mp[s[left]]--;
                left++;
            }
            ans = max(ans,right-left);
        }
        return ans;
    }
};
