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
    ListNode* oddEvenList(ListNode* head) {
        auto temp=head;
        if(head==nullptr || head->next==NULL||head->next->next==nullptr)return head;
        int n=0;
        while(temp->next!=NULL){
            n++;
            temp=temp->next;
        }n++;
        n=n/2;
        auto pre=head;
    
        while(n>0){
                temp->next=pre->next;
                temp=temp->next;
                pre->next=temp->next;
                temp->next=NULL;
                n--;
                pre=pre->next;
        }return head;
    }
};