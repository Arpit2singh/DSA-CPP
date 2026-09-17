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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if(n == 1 && head.next == null ) return null ; 
        if(n == 1 && head.next.next == null) {
            head.next = null ; 
            return head ; 
        }
        if(n == 2 && head.next.next == null){
            return head.next ; 
        }
        ListNode dummy = new ListNode(-1001) ; 
        dummy.next = head ; 
        ListNode fast =  dummy; 
        ListNode slow = dummy ; 

        while(n>0 && fast != null){
            fast = fast.next ; 
            n-- ;
        }
        while(fast != null && fast.next != null){
            fast = fast.next ;
            slow = slow.next ;  
        }
        if(slow.next == head){
             slow.next = slow.next.next ; 
             return slow.next ; 
        }
        slow.next = slow.next.next ; 
        return head; 

    }
}