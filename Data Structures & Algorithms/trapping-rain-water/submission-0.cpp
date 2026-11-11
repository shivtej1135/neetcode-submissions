class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty()) return 0;
        vector<int>leftMax(height.size());
        vector<int>rightMax(height.size());
        int max1=height[0];
        int max2=height[height.size()-1];
        int sum=0;

        for(int i=0;i<height.size();i++){
            max1=max(max1,height[i]);
            leftMax[i]=max1;
        }
        for(int i=height.size()-1;i>=0;i--){
            max2=max(max2,height[i]);
            rightMax[i]=max2;
        }
        for(int i=0;i<height.size();i++){
            sum=sum+min(rightMax[i],leftMax[i])-height[i];
        }
        return sum;
    }
};
