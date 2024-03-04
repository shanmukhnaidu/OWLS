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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp=head;
        if(head==NULL) return head;
        if(head->next==NULL) return head;
        vector<int>v;
        while(temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        ListNode* t=head;
        // int i=1;
        // int c=1;
        // while(t)
        // {
        //     if(c==left) break;
        //     c++;
        //     t=t->next;
        // }
        reverse(v.begin()+left-1,v.begin()+right);
        // for(auto it:v) cout<<it<<" ";
        // while(i!=right+1)
        // {
        //     t->val=v[i-1];
        //     i++;
        // }
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