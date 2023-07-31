class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int m  = 0;
        int ans = 0;
        for(int i = 1; i < arr.size() - 1; i++){
            if(arr[i-1] < arr[i] && arr[i] > arr[i+1]){
                m = i;
            }
            ans = max(m,ans);
        }
        return ans;
    }
};
