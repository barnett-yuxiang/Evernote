package org.example;

import static org.junit.jupiter.api.Assertions.assertEquals;

import org.junit.jupiter.api.Test;

public class DemoTest {

    @Test
    public void testReverseListWithNullHead() {
        Demo demo = new Demo();
        ListNode head = null;
        ListNode expected = null;
        ListNode result = demo.reverseList(head);
        assertEquals(expected, result);
    }

    @Test
    public void testReverseListWithSingleNode() {
        Demo demo = new Demo();
        ListNode head = new ListNode(1);
        ListNode expected = head;
        ListNode result = demo.reverseList(head);
        assertEquals(expected, result);
    }

    @Test
    public void testReverseListWithMultipleNodes() {
        Demo demo = new Demo();
        
        ListNode head = new ListNode(1);
        ListNode node2 = new ListNode(2);
        ListNode node3 = new ListNode(3);
        ListNode node4 = new ListNode(4);

        head.next = node2;
        node2.next = node3;
        node3.next = node4;
        
        ListNode expected = node4;
        expected.next = node3;
        node3.next = node2;
        node2.next = null;
        
        ListNode result = demo.reverseList(head);
        assertEquals(expected.val, result.val);
        assertEquals(expected.next.val, result.next.val);
        assertEquals(expected.next.next.val, result.next.next.val);
        assertEquals(null, result.next.next.next);
    }

}