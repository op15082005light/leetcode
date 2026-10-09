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
 void reverse (ListNode *&last,ListNode *& curr,ListNode*&pre){
if(curr==last->next){
    return ;
}
   reverse (last,curr->next,curr);
   curr->next=pre;
} 
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
         if (head == nullptr || left == right) {
            return head;
        }
        auto temp=head;
        auto curr=temp;
        auto last=temp;
       
         ListNode*pre  = nullptr;

        int count=1;
         while (count < left) {
            pre = temp;
            temp = temp->next;
            count++;
        }

        curr = temp;

        while (count < right) {
            temp = temp->next;
            count++;
        }

        last = temp;auto next = last->next;
        reverse(last,curr,pre);
if (pre != nullptr) {
            pre->next = last;
        } else {
            head = last;
        }

        curr->next = next;



        return head;
    }
};