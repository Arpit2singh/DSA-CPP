/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        if(head == null || head.next == null) return null ;
        ListNode dummy = new  ListNode(-1001) ; 
        dummy.next = head  ;  
        ListNode fast = dummy ; 
        ListNode slow = dummy ; 

        while(fast != null && fast.next != null && fast.next.next != null){
            slow = slow.next; 
            fast = fast.next.next ; 
            if(slow == null || fast == null) return null ; 
            if(slow == fast){
                ListNode temp = head ; 
                if(temp == fast ) return temp ; 
                while(temp != fast.next ){
                    temp = temp.next ; 
                    fast = fast.next ; 
                    if(fast.next == temp) return temp ; 
                }
                return temp ; 
            }
        }
        return null ; 
    }
}