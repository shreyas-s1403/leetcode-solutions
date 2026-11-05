
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        int cnt = 1;
        int first = -1, last = -1;
        int prevCritical = -1;
        int mini = INT_MAX;

        ListNode* temp = head->next;
        ListNode* prev = head;

        while (temp != NULL && temp->next != NULL) {

            if ((prev->val < temp->val && temp->next->val < temp->val) ||
                (prev->val > temp->val && temp->next->val > temp->val)) {

                if (first == -1) {
                    first = cnt;
                }
                else {
                    mini = min(mini, cnt - prevCritical);
                }

                prevCritical = cnt;
                last = cnt;
            }

            prev = temp;
            temp = temp->next;
            cnt++;
        }

        if (first == -1 || first == last)
            return {-1, -1};

        return {mini, last - first};
    }
};
