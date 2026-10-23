// void set(vector<int> nums,int & count , vector<int>,int i){
// if(i==nums.size()){
//     return ;
// }




// }




class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    //     int count =0;
    //     vector<int>arr;

    // set(nums,count,arr,0);
    //     return count;
    if(k <= 1)return 0;
    int n = nums.size();
    int low = 0,high = 0;
    int count = 0,prod = 1;
    for(high = 0;high < n;high++){
        prod *= nums[high];
        while(prod >= k){
            prod /= nums[low];
            low++;
        }
        count += (high -low +1);
    }
    return count;
    }
};