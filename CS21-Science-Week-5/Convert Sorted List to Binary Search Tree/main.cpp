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
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head) return nullptr;
        ListNode **sl = &head;
        ListNode **fs = &head;
        while(*fs and (*fs)->next){
            sl = &(*sl)->next;
            fs = &(*fs)->next->next;
        }
        ListNode *r = (*sl)->next;
        ListNode *cur = *sl;
        *sl = nullptr;
        cur->next = nullptr;
        TreeNode *root = new TreeNode(cur->val, sortedListToBST(head), sortedListToBST(r));
        cur->next = r;
        *sl = cur;
        return root;
    }
};
