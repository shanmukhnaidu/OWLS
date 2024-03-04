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
    ListNode* oddEvenList(ListNode* head) {
        vector<int>v;
        ListNode* temp=head;
        if(head==NULL or head->next==NULL) return head;
        while(temp!=NULL and temp->next!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next->next;
        }
        if(temp) v.push_back(temp->val);
        ListNode* t=head->next;
        while(t!=NULL and t->next!=NULL)
        {
            v.push_back(t->val);
            t=t->next->next;
        }
        if(t) v.push_back(t->val);
        ListNode* newnode=head;
        int i=0;
        while(newnode)
        {
            newnode->val=v[i];
            i++;
            newnode=newnode->next;
        }
        return head;
    }
};