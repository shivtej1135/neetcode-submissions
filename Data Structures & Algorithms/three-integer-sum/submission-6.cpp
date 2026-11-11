class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<int>ans=nums;
        sort(ans.begin(),ans.end());
        vector<vector<int>>ans1;
        
        for(int i=0;i<ans.size();i++){
            if(i > 0 && ans[i] == ans[i-1]){
                     continue;
                    }
            if(i<ans.size()-1){
                int left=i+1;
                int right=ans.size()-1;
                while(left<right){
                if(ans[i]+ans[left]+ans[right]>0){
                    right--;
                }
                else if(ans[i]+ans[left]+ans[right]<0){
                    left++;
                }
                else{
    ans1.push_back({ans[i], ans[left], ans[right]});

    left++;
    right--;

    while(left < right && ans[left] == ans[left-1]){
        left++;
    }

    while(left < right && ans[right] == ans[right+1]){
        right--;
    }
}
                }
            } 
        }
        return ans1;
    }
};
