/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
public class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {

        ListNode retorno = new ListNode(0);
        ListNode atual = retorno;
        int cont = 0;

        while (l1 != null || l2 != null || cont != 0) {
            int val1 = (l1 != null) ? l1.val : 0;
            int val2 = (l2 != null) ? l2.val : 0;

            int soma = val1 + val2 + cont;
            cont = soma / 10;

            atual.next = new ListNode(soma % 10);
            atual = atual.next;

            if (l1 != null) l1 = l1.next;
            if (l2 != null) l2 = l2.next;
        }

        return retorno.next;
    }
}