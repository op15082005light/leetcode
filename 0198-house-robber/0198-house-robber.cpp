class Solution {
public:
    int rob(vector<int>& nums) {
        pair<int,int>ans=make_pair(0,0);

        for(int i=0;i<nums.size();i++){
            int temp=ans.first;
            ans.first=nums[i]+ans.second;
            ans.second=max(temp,ans.second);
        }return max(ans.first,ans.second);
    }
};