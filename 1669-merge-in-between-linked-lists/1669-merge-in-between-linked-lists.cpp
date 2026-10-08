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
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int count=0;
        auto temp=list1;
        auto first=list1;
        auto sec=list1;
        while(count!=b){
            
            if(temp->next!=NULL){
                temp=temp->next;
                count++;
            }else{
                break;
            }
            if(count+1==a){
                first=temp;
            }
        }
        sec=temp;
temp=list2;
while(temp->next!=NULL){
    temp=temp->next;
}
first->next=list2;
temp->next=sec->next;
return list1;


    }
};