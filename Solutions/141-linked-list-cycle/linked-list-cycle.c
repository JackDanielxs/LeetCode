/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode* head) {
    struct ListNode *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;           // avança 1 passo
        fast = fast->next->next;     // avança 2 passos
        if (slow == fast) return true;
    }
    return false;
}

