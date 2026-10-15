class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
            vector<int > ans={-1,-1};
            int mid=s+(e-s)/2;
          while(s<=e){
             mid=s+(e-s)/2;
            if(nums[mid]==target){
                ans[0]=mid;
                e=mid-1;
            }else if(nums[mid]<target){
                s=mid+1;
            }else{
                e=mid-1;
            }
          }s=0;
          e=nums.size()-1;
          while(s<=e){
             mid=s+(e-s)/2;
            if(nums[mid]==target){
                ans[1]=mid;
                s=mid+1;
            }else if(nums[mid]>target){
                e=mid-1;
            }else{
                s=mid+1;
            }
    }return ans;
          }

};