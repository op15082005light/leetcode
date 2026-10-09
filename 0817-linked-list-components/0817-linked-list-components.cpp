/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 bool check(vector<int>& nums,int a){
    int s=0;
    int e=nums.size()-1;
    while(s<=e){
    int mid=s+(e-s)/2;
        if(nums[mid]==a){
            return true;
        }if(nums[mid]>a){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }return false;
 }
class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
       sort(nums.begin(),nums.end());
auto temp=head;
int count=0;
if(nums.size()==0){
    return 0;
}if(head==nullptr){
    return 0;
}
    int a=0;
while(temp!=nullptr){
    a=0;
while(temp!=nullptr&&check(nums,temp->val)){
    a=1;
temp=temp->next;
}if(a==1){
    count++;
}if(temp==nullptr){
    break;
}else{
    temp=temp->next;
}
    
}

return count;
    }
};