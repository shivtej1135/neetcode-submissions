class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;
        vector<int>ans;
        while(right>left){
            if(target==numbers[left]+numbers[right]){
                ans.push_back(left+1);
                ans.push_back(right+1);
                return ans;
            }
            else if(target <numbers[left]+numbers[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return ans;
    }
};