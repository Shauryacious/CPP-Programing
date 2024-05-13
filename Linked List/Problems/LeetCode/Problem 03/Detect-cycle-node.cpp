Given a linked list, determine if it contains a cycle. If it does, return the node where the cycle begins; otherwise, return null. Additionally, solve it using O(1) memory.

https://leetcode.com/problems/linked-list-cycle-ii/

//Approach 01 : Using Hashing map
// Time Complexity : O(n)
// Space Complexity : O(n)

//Approach 02 : Using Two Pointers
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return NULL;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow=slow->next; 
            fast=fast->next->next;

            if(slow == fast){
                break;
            }
        }

        if(slow == fast){
            ListNode* start = head;
            while(start != slow){
                start = start->next;
                slow = slow->next;
            }
            return slow;
        }
        else{
            return NULL;
        }
        return NULL;
    }
};

