class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area=0;
        int ans=0;
        int left=0;
        int right=heights.size()-1;
        while(right>left){
            area=min(heights[right],heights[left]) * (right-left);
            ans=max(ans,area);
            if(heights[right]>heights[left]) left++;
            else right--;
        }
        return ans;
    }
};
