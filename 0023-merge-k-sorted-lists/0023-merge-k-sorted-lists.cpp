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
    ListNode* mergeKLists(vector<ListNode*>& l) {
        if(l.size()==0 ){
            return NULL;
        }
        ListNode* head=l[0];
        
           int a=0;
           int b=0;

           auto p1=head;
           auto p2=head;
        auto temp=head;
        auto curr=head;

        for(int i=1;i<l.size();i++){
            if(l[i]==NULL)continue;

            curr=l[i];
            if(head==NULL){
                head=curr;
                continue;
            }

                temp=head;
            
            ListNode dam(0);
           auto head1=&dam;

            while(temp!=nullptr && curr!=NULL){
                a=temp->val;
                b=curr->val;

                p1=temp;
                p2=curr;

                if(a<=b)temp=temp->next;
                else{curr=curr->next;}

            head1->next=(a<=b)?p1:p2;
            head1=head1->next;
            }
            if(temp!=NULL){
                    head1->next=temp;
            }else {
                    head1->next=curr;
            }
            head=dam.next;
        }return head;
    }
};