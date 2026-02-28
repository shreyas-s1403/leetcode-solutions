/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head==NULL){
        return head;
    }
    struct ListNode* current=head;
    while(current->next!=NULL){
        if(current->val==current->next->val){
            struct ListNode* nodeToDelete=current->next;
            current->next=current->next->next;
            free(nodeToDelete);
        }else{
            current=current->next;
        }
    }
    return head;
}