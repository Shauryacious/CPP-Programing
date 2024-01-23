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
        //TWO ITERATION APPROACH 

        // ListNode* temp = head;
        // int length = 0;
        // while(temp != NULL){ // O(n)
        //     length++;
        //     temp = temp->next;
        // }

        // int mid_idx = length/2;
        // temp = head;
        // for(int i=0; i<mid_idx; i++){ // O(n/2)
        //     temp = temp->next;
        // }

        // return temp;
        // //overall O(n) time complexity

        //SINGLE ITERATION APPROACH
        ListNode* slow = head;
        ListNode* fast = head;
        // while(fast->next!=NULL && fast!=NULL){ //WRONG CODE -> phle fast != NULL check karo!!
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};