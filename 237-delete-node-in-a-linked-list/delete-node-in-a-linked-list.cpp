/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // if (!node || !(node->next)) return;
        // ListNode* t=node->next;
        // node->val=t->val;
        // node->next=t->next;
        // free(t);
        // ListNode* temp=node->next;
        *node=*(node->next);
        // delete temp;
    }
};