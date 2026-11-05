class Solution {
public:
    int countElements(vector<int>& nums) {
        int max=INT_MIN;
        int min=INT_MAX;
        for(int i:nums){
            if(max<i){
                max=i;
            }if(min>i){
                min=i;
            }
        }
        int count=0;
        for(int i:nums){
            if(i<max && i>min)count++;
        }return count;
    }
};