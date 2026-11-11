class Solution { 
public: 
    int maxArea(vector<int>& heights) { 
        int area = 0; 
        int ans = 0; 
        int left = 0; 
        int right = heights.size() - 1; 

        // Move both pointers towards each other
        while(right > left){ 

            // Calculate the area formed by the current two bars
            area = min(heights[right], heights[left]) * (right - left); 

            // Store the maximum area found so far
            ans = max(ans, area); 

            // Move the pointer pointing to the smaller bar
            if(heights[right] > heights[left]) 
                left++; 
            else 
                right--; 
        } 

        return ans; 
    } 
};

