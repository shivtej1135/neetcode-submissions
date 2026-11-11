class Solution { 
public: 
    bool searchInRow(vector<vector<int>>& arr, int midRow, int n, int target){ 
        int st = 0; 
        int end = n - 1; 

        while(st <= end){ 
            int mid = st + (end - st) / 2; 

            if(arr[midRow][mid] == target){ 
                return true; 
            } 
            else if(arr[midRow][mid] < target){ 
                st = mid + 1; 
            } 
            else{ 
                end = mid - 1; 
            } 
        } 

        return false; 
    } 
 
    bool searchMatrix(vector<vector<int>>& matrix, int target) { 
        int m = matrix.size(); 
        int n = matrix[0].size(); 

        int startRow = 0; 
        int endRow = m - 1; 

        while(startRow <= endRow){ 
            int midRow = startRow + (endRow - startRow) / 2; 

            if(target >= matrix[midRow][0] && target <= matrix[midRow][n - 1]){ 
                return searchInRow(matrix, midRow, n, target); 
            } 
            else if(target > matrix[midRow][n - 1]){ 
                startRow = midRow + 1; 
            } 
            else{ 
                endRow = midRow - 1; 
            } 
        } 

        return false; 
    } 
};
