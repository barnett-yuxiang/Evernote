package org.example;

public class Demo {

    /**
     * Reverses a given linked list.
     * 
     * @param head The head node of the linked list to be reversed.
     * @return The head node of the reversed linked list.
     */
    public ListNode reverseList(ListNode head) {
        ListNode prev = null; // Initialize 'prev' node as null, to store nodes in the reversed list.
        while (head != null) { // Traverse the list until reaching a null head node.
            ListNode next = head.next; // Temporarily store the next node of the current node.
            head.next = prev; // Point the current node's next to 'prev', performing the reversal.
            prev = head; // Update 'prev' to the current node.
            head = next; // Move on to the next node.
        }
        return prev; // Return the head node of the reversed linked list.
    }

}

class ListNode {
    int val;
    ListNode next;
    ListNode(int x) { val = x; }
}
