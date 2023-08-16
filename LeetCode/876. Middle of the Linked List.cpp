/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slowPtr = head;
        ListNode* fastPtr = head;

        // Travel until the fast pointer reaches the last node or NULL
        while(fastPtr != NULL && fastPtr->next != NULL){
            // Slow pointer moves 1 node
            slowPtr = slowPtr->next;
            // Fast pointer moves 2 nodes
            fastPtr = fastPtr->next->next;
        }

        return slowPtr;
    }
};

/// This algorithm is called "Hare And Tortoise Algorithm"
