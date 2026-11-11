class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq=0;
        int currNum=nums[0];
        for(int i=0;i<nums.size();i++){
            if(currNum==nums[i]){
                freq++;
            }
            else{
                freq--;
            }
            if(freq<0){
                freq=0;
                currNum=nums[i];
            }
        }
        return currNum;
    }
};