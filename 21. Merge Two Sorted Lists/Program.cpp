class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);  // Create a dummy node as the starting point
        ListNode* current = dummy;  // Initialize a pointer 'current' to track the end of the merged list

        while (l1 && l2) {  // Continue while both lists have nodes left to process
            if (l1->val < l2->val) {  // Compare the current nodes of both lists
                current->next = l1;  // Attach the node from 'l1' to the merged list
                l1 = l1->next;  // Move to the next node in 'l1'
            } else {
                current->next = l2;  // Attach the node from 'l2' to the merged list
                l2 = l2->next;  // Move to the next node in 'l2'
            }
            current = current->next;  // Move the 'current' pointer forward
        }

        // Attach the remaining nodes from the non-empty list
        current->next = l1 ? l1 : l2;

        return dummy->next;  // Return the next node of the dummy, which is the head of the merged list
    }
};
