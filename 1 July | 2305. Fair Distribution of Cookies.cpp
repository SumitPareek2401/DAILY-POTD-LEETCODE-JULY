class Solution {
public:
    int ans;
    vector<int> count;

    int distributeCookies(vector<int>& cookies, int k) {
        ans = INT_MAX;
        count.resize(k);
        backtrack(0,cookies, k);
        return ans;
    }

    void backtrack(int index, vector<int>& cookies, int k){
        if(index == cookies.size()){
            int maxi = 0;
            for(int i = 0; i < k; i++){
                maxi = max(maxi, count[i]);
            }
            ans = min(ans,maxi);
            return;
        }
        for(int i =0; i < k; i++){
            count[i] += cookies[index];
            backtrack(index+1, cookies, k);
            count[i] -= cookies[index];
            if(count[i] == 0)   break;
        }
    }
};
