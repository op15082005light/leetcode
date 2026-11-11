class Solution {
public:
    int rob(vector<int>& nums) {
        pair<int,int>ans=make_pair(0,0);

            int temp=ans.first;
        for(int i:nums){
         temp=ans.first;
            ans.first=i+ans.second;
            ans.second=max(temp,ans.second);
        }return max(ans.first,ans.second);
    }
};