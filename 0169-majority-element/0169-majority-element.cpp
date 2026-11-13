class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =1;
        sort(nums.begin(),nums.end());
        int nu=nums[0];
    int temp=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
                count++;
                if(temp<count){
                    temp=count;
                    nu=nums[i];
                }
            }else{
                count=1;
            }
        }return nu;
    }
};