class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // Move fast n+1 steps ahead so that slow points to the node before the one to delete
        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }

        // Move both fast and slow until fast reaches the end
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Delete the node
        slow->next = slow->next->next;

        return dummy->next;
    }
};
