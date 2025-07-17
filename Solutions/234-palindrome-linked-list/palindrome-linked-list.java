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
class Solution {

    public boolean verificarLista(List<Integer> lista){
        int n = lista.size();
        for(int i = 0; i < n; i++){
            if(lista.get(i) != lista.get(n - i - 1))
                return false;
        }
        return true;
    }

    public boolean isPalindrome(ListNode head) {
        List<Integer> lista = new ArrayList<>();
        ListNode tmp = head;

        while(tmp != null){
            lista.add(tmp.val);
            tmp = tmp.next;
        }

        return verificarLista(lista);
    }
}