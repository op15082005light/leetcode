class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        int mini = maxi;
        int ans = maxi;
        for(int i=1;i<n;i++){
            int v1 = nums[i] * maxi;
            int v2 = mini * nums[i];
            int v3 = nums[i];
            maxi = max(v1,max(v2,v3));
            mini = min(v1,min(v2,v3));
            ans = max(ans,max(mini,maxi));
        }
        return ans;
    }
};