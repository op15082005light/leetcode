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
 void reverse (ListNode *&head,ListNode *curr,ListNode*pre){
if(curr==NULL){
    head=pre;
    return ;
}
   reverse (head,curr->next,curr);
   curr->next=pre;
}
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
         auto curr=head;
   ListNode *pre=NULL;
   reverse (head,curr,pre);
return head;
    }
};