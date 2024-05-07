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
    ListNode* doubleIt(ListNode* head) {
        ListNode* revv=rev(head);
        int carry=0;
        ListNode* cuu=revv;
        ListNode* pe=NULL;
        while(cuu!=NULL)
        {
            int nn=cuu->val*2+carry;
            cuu->val=nn%10;
            if(nn>9) carry=1;
            else carry=0;
            pe=cuu;
            cuu=cuu->next;
        }
        if(carry!=0)
        {
            ListNode* e=new ListNode(carry);
            pe->next=e;
        }
        ListNode* ree=rev(revv);
        return ree;
    }
        ListNode* rev(ListNode* node)
        {
            ListNode* pre=NULL;
            ListNode* curr=node;
            ListNode* next;
            while(curr!=NULL)
            {
                next=curr->next;
                curr->next=pre;
                pre=curr;
                curr=next;
            }
            return pre;
        }
    
};