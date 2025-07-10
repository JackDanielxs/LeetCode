/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    // Cria nó cabeça
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* curr = &dummy;

    while (curr->next) {
        if (curr->next->val == val) {
            struct ListNode* temp = curr->next;
            curr->next = temp->next;
            free(temp);
        } else {
            curr = curr->next;
        }
    }

    return dummy.next;
}
