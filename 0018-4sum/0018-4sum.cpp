class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        if(nums.size()<4){
            return ans;
        }
        for(int i=0;i<nums.size()-3;i++){
            if (i > 0 && nums[i] == nums[i - 1])
    continue;

            for(int j=i+1;j<nums.size()-2;j++){
                if (j > i + 1 && nums[j] == nums[j - 1])
    continue;

                int left=j+1;
                int right=nums.size()-1;
                while(left<right){
                    long long sum=(long long)nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum==target){
                        ans.push_back({nums[i],nums[j],nums[left],nums[right]});
                        left++;
                        while(left<right&&nums[left-1]==nums[left]){
                            left++;
                        }
                        right--;while(left<right&&nums[right]==nums[right+1]){
                            right--;}
                    }else if (sum<target){
                        left++;
                    }else {
                        right--;
                    }
                }
            }
        }
        
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }
};