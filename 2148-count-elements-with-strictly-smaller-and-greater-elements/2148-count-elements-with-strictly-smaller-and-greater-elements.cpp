class Solution {
public:
    int countElements(vector<int>& nums) {
        int max=INT_MIN;
        int min=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(max<nums[i]){
                max=nums[i];
            }if(min>nums[i]){
                min=nums[i];
            }
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<max && nums[i]>min)count++;
        }return count;
    }
};