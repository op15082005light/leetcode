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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ans=new ListNode(0);
        auto temp1=ans;
        int sum =0 ;
        auto temp = head;
         while(temp!=nullptr){
            if(temp->val==0){
                temp=temp->next;
                if(sum!=0){
                    ListNode* a =new ListNode(sum);
                  temp1->next=a;
                  temp1=temp1->next;
                }
                sum=0;
                continue;
            }
            sum+=temp->val;
            temp=temp->next;
         }


return ans->next;






    }
};