Given a singly linked list, rearrange the nodes such that all nodes with odd indices appear first followed by nodes with even indices, while maintaining the relative order within both groups. Constraints include O(1) extra space and O(n) time complexity.


https://leetcode.com/problems/odd-even-linked-list/description/

Approach:
            Story : 
            1. Hume odd and even ko segregate karna hai
            2. To do so, take two pointers to point to ODD and EVEN nodes
            3. Unko alag alag segregate kardenge
            4. Last me connect kardenge odd ko even se
            


class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL) return head;
        ListNode* odd = head;
        ListNode* even = head->next;

        ListNode* evenStartPointer = even;

        while(even != NULL && even->next != NULL){
            odd->next = odd->next->next;
            even->next = even->next->next;

            //move odd and even pointer to nest new position
            odd = odd->next;
            even = even->next;
        }

        odd->next = evenStartPointer;
        return head;
    }
};