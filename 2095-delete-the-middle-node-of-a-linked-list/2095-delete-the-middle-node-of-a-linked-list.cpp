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
    ListNode* deleteMiddle(ListNode* head) {
        auto temp = head;
        int count =1;
        if(head->next==nullptr){
            return nullptr;
        }
        while(temp->next!=nullptr){
            temp=temp->next;
            count++;
        }
temp=head;
int middle=count/2;

while(middle>1){
    temp=temp->next;
    middle--;

}
if(temp->next->next!=nullptr){
temp->next=temp->next->next;}
else{
    temp->next=nullptr;
}
return head;



    }
};