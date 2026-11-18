/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       map< ListNode* ,ListNode*>m;

       auto temp=head;

       while(temp!=NULL){
        if(m.find(temp)==m.end()){
            m[temp]=temp->next;
            temp=temp->next;
        }else{
            return temp;
        }
       }return NULL;
    }
};