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
    bool isPalindrome(ListNode* head) {
        string fwd="",rev="";
        ListNode *ptr=head;
        while (ptr!=NULL){
            fwd+=(char)('0'+ptr->val);
            ptr=ptr->next;
        }
        for (int i=fwd.size()-1;i>=0;i--) rev+=fwd[i];
        if (fwd==rev) return true;
        return false;
    }
};