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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        auto temp=head;
        if(head==nullptr){
            return head;
        }
        int i=0;
       
        while(temp!=nullptr){
            temp=temp->next;
            i++;
        }
        temp=head;
       for(int   j=0; j<i-1-n;j++){
            temp=temp->next;
        
        }
if(n==i){
  return head->next;
}else if(n==1){
    temp->next=nullptr;
    return head;
}else{

        temp->next=temp->next->next;}
        return head;



    }
};