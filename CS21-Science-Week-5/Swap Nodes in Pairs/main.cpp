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
    ListNode* swapPairs(ListNode* head) {
        if(!head or !head->next)
            return head;
        ListNode* node = new ListNode(-1);
        ListNode* cur = node;
        node->next = head;
        while(head!=NULL && cur!=NULL && head->next!=NULL )
        {
            ListNode *temp = head->next;
            ListNode * a = temp->next;
            temp->next = head;
            head->next = a;
            cur->next = temp;
            head = head->next;
            cur = cur->next->next;
        }
        return node->next;
    }
};
