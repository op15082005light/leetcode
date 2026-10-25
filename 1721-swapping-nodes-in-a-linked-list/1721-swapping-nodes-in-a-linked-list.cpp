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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==nullptr)return head;
        int i=1; 
        auto temp = head;
        while(temp!=nullptr){
            temp=temp->next;
            i++;
        }
int j=1;
auto temp1=head;
temp=head;
while(j<k){
temp1=temp1->next;
j++;
}
while(i-k-1>0){
    temp=temp->next;
    i--;
}
swap(temp1->val,temp->val);
return head;

    }
};