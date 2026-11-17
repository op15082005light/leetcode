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
 bool chacke(ListNode* temp,int k){
    
    while(k>0&&temp!=NULL){
        temp=temp->next;
        k--;
    
    }return k!=0;
 }
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL||k==1){
            return head;
        }
        auto p1=head;
        auto p2 =head;
        auto p3=head;
        auto p4=head;
        auto p5=head;
        auto temp=head;
        auto temp1=head;
        bool first=true;

        while(temp!=NULL){
            int a=k;
            temp1=temp;
            p1=temp;

            if(chacke(temp1,k)){
                break;
            }
            p2=NULL;
            while(a>0){

                p3=temp;
                p4=temp->next;
                p3->next=p2;
                p2=p3;
                temp=p4;
                a--;
            }if (first) {
                head = p2;
                first = false;
            }
            else {
                p5->next = p2;
            }
            p1->next=temp;
            p5=p1;
            
            
        }return head;
    }
};