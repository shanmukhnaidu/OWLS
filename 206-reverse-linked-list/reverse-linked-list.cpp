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
    ListNode* reverseList(ListNode* head) {
        vector<int>v;
        ListNode* temp=head;
        while(temp)
        {
            int x=temp->val;
            v.push_back(x);
            temp=temp->next;
        }
        reverse(v.begin(),v.end());
        ListNode* t=head;
        int i=0;
        while(t)
        {
            t->val=v[i];
            i++;
            t=t->next;
        }
        return head;
    }
};