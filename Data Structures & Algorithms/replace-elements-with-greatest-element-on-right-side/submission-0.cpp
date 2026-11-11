class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int highest=arr[n-1];
        int curr=arr[n-1];
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                arr[i]=-1;
            }
            else{
                curr=arr[i];
                arr[i]=highest;
                highest=max(highest,curr);
            }
        }
        return arr;
    }
};