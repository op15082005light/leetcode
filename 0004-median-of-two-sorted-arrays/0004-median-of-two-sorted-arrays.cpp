class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> small=nums1.size()>nums2.size()?nums2:nums1;
        vector<int> large=nums1.size()>nums2.size()?nums1:nums2;
        int length=nums1.size()+nums2.size();
        int s=0;
        int e=small.size();
        while(s<=e){
int m1=s+(e-s)/2;
int m2=(length+1)/2-m1;

int l1=m1==0?INT_MIN:small[m1-1];
int r1=m1==small.size()?INT_MAX:small[m1];

int l2=m2==0?INT_MIN:large[m2-1];
int r2=m2==large.size()?INT_MAX:large[m2];

if(l1<=r2&&l2<=r1){
    if(length%2==0){
        return  (max(l1,l2)+min(r1,r2))/2.0;
    }else{
        return max(l1,l2);
    }
}
if(l1>r2){
    e=m1-1;
}else{
    s=m1+1;
}
        }return 0;
    }
};