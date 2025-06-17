/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (!head) return NULL;
    struct ListNode* atual = head;
    while (atual && atual->next) {
        if (atual->val == atual->next->val) {
            struct ListNode* temp = atual->next;
            atual->next = temp->next;
            free(temp);
        } else {
            atual = atual->next;
        }
    }
    return head;
}