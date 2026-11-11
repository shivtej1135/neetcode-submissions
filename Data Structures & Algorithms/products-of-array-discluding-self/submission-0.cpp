class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prod1(nums.size());
         vector<int>prod2(nums.size());
         vector<int>ans(nums.size());
         int n=nums.size();
        int product=1;

        if(n==1){
            ans[n]=nums[n];
            return ans;
        }

        for(int i=0;i<nums.size();i++){
            product=product*nums[i];
            prod1[i]=product;
        }
        product =1;
        for(int i=nums.size()-1;i>=0;i--){
            product=product*nums[i];
            prod2[i]=product;
        }
        

        for(int i=0;i<nums.size();i++){
            if(i==0){
                ans[0] = prod2[1];
            }
            else if(i==n-1){
                ans[n - 1] = prod1[n - 2];
            }
            else{
                ans[i]=prod1[i-1]*prod2[i+1];
            }
        }
        return ans;
    }
};