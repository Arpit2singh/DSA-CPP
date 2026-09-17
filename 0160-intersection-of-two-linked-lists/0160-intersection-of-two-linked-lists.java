/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode heada , ListNode headb) {
     if( headb == heada) return heada ; 
     if(heada == null) return headb ; 
     if(headb == null) return headb ; 
     
     ListNode slow = heada ; 
     ListNode fast = headb ; 

     while(slow != fast){
        slow = slow.next ; 
        fast = fast.next ; 
        if(slow == null && fast == null) return null ; 
        if(slow == null) {
            slow = headb ; 
        } 
        if(fast == null){
            fast = heada ; 
        }
        if(slow == fast) return slow ; 
     }
        return null ; 
     }
}