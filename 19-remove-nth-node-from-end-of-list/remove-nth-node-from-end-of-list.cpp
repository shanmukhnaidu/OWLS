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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int c=0;
        while(temp)
        {
            c++;
            temp=temp->next;
        }
        int x=c-n;
        if(c==n) return head->next;
        ListNode* t=head;
        int q=0;
        while(t)
        {
            q++;
            if(q==x)
            {
                t->next=t->next->next;
                break;
            }
            t=t->next;
        }
        return head;
    }
};