class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len = INT_MAX;
        int i = 0;
        int j = 0;
        int sum = 0;
        while(j < nums.size()){
            sum += nums[j];

            if(sum >= target){

                while(sum >= target){
                    sum -= nums[i];
                    i++;
                }
                len = min(len, j-i+2);
            }
            j++;
        }
        return len == INT_MAX? 0 : len;
    }
};
