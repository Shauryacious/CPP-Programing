//! Given a singly-linked list and a node within it, remove the node from the list while maintaining the order of the other nodes.

//! https://leetcode.com/problems/delete-node-in-a-linked-list/description/

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* prev = NULL;
        ListNode* temp = node;
        while(temp->next != NULL && temp != NULL){
            //assign value to temp from next node
            temp->val = temp->next->val;
            //make prev point to temp
            prev = temp;
            temp = temp->next;
        }

        prev->next = NULL;
        delete(temp);
    }
};