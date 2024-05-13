Given a sorted singly linked list, convert it into a height-balanced binary search tree (BST).

https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/description/

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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
void middle(ListNode* head){
        // slow aur fast pointers ko head se start karenge
        slow = head;
        fast = head;
        // fast aur fast ka next node NULL nahi hone tak loop chalayenge
        while(fast!=NULL && fast->next!=NULL){
            slow_prev = slow;
            slow = slow->next;
            slow_next = slow;
            fast = fast->next->next;
        }
        // Ab slow pakka middle ko point kar raha hoga
        // Aur slow_prev slow ke previous ko point kar raha hoga
    }
    TreeNode* solve(ListNode* head){
        // Agar head NULL hai to NULL return karenge
        if(head == NULL) return NULL;

        // middle function call karenge
        middle(head);

        // Naya TreeNode banayenge
        TreeNode* temp = new TreeNode(slow->val);

        // Linked list ko do halves mein break karenge aur left half ko root->left mein bhejenge
        slow_prev->next = NULL;
        temp->left = solve(HEAD);

        // Right half ko root->right mein bhejenge
        temp->right = solve(slow->next);

        // TreeNode return karenge
        return temp;
    }
public:
    TreeNode* sortedListToBST(ListNode* head) {
        // Agar head NULL hai to NULL return karenge
        if(head == NULL) return NULL;

        // Agar head ka next node NULL hai to naya TreeNode banakar return karenge
        if(head->next == NULL){
            TreeNode* node = new TreeNode(head->val);
            return node;
        }

        // solve function call karenge
        TreeNode* root = solve(head);

        // root return karenge
        return root;
    }