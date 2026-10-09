class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size()==3){
            return nums[0]+nums[1]+nums[2];
        }
        sort(nums.begin(),nums.end());
        int add=-2000;
        int sub=abs(add-target);
        int s=0;
        int e=nums.size()-1;
        for(int i=0;i<nums.size()-2;i++){
s=i+1;
e=nums.size()-1;
while(s<e){
     int sum = nums[i] + nums[s] + nums[e];
if(abs(nums[i]+nums[s]+nums[e]-target)<sub){

    add=nums[i]+nums[s]+nums[e];
    sub=abs(add-target);
}if (sum == target){
       return sum;
                } 
                else if (sum < target) {
                    s++;
                } 
                else {
                    e--;
                }
}   
    }return add;
    }
};
