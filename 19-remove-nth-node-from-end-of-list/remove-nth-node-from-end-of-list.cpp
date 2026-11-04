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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        ListNode *prev=NULL;
        int idx=0,cnt=0;
        while (temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        temp=head;
        while(temp!=NULL && idx!=cnt-n){
            prev=temp;
            temp=temp->next;
            idx++;
        }
        if (temp==NULL) return NULL;
        if (temp==head){
            if (head->next!=NULL){
                head=head->next;
            }
            else head=NULL;
            return head;
        }
        else{
            prev->next=temp->next;
            return head;
        }
        return head;
    }
};