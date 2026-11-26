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
    int getDecimalValue(ListNode* head) {
        auto temp=head;
        int n=0;
        while(temp!=nullptr){
            n++;
            temp=temp->next;
        }
    n--;
        int ans=0;
        while(head!=NULL){
            if(head->val==1)
            ans=ans+pow(2,n);
            head=head->next;
            n--;
            
        }return ans;

    }
};