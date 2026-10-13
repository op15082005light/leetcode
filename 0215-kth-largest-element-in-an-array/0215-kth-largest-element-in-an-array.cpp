class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=nums.size()-1;
        while(k>1){
            i--;
            k--;
        }return nums[i];
    }
};