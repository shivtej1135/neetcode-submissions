class Solution:
    def maxArea(self, heights: List[int]) -> int:
        right = len(heights) - 1
        left = 0
        ans = float('-inf')
        while(left<right):
            height = min(heights[right],heights[left])
            width = right - left
            ans = max(ans,height*width)
            if(heights[right]>heights[left]):
                left = left + 1
            else:
                right = right - 1
        return ans



        