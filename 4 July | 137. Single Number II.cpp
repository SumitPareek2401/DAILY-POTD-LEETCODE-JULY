class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> st;
        for(int i = 0; i < nums.size(); i++){
            st[nums[i]]++;
        }

        // for(int i = 0; i < st.size(); i++){
        for(auto x : st){
            if(x.second == 1){
                return x.first;
            }
        }
        return -1;
    }
};
