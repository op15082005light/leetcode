class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a=INT_MAX;
        int count =1;
        int k=1;
        if(nums.size()<=2){
            return nums.size();
        }

        for(int i=1;i<nums.size();i++){
if(nums[i]==nums[i-1] && count==1){
count++;
 nums[k] = nums[i];
k++;
}else if (nums[i]==nums[i-1] && count >1){
     
    count++;
continue;
}
else{
    count=1;
     nums[k] = nums[i];
    k++;
}
        }
      
        return k;
    }
};