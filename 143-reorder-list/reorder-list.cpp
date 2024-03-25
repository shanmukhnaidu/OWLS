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
    void reorderList(ListNode* head) {
        vector<int>v,v1;
        ListNode* temp=head;
        int c=0;
        while(temp)
        {
            c++;
            temp=temp->next;
        }
        ListNode* t=head;
        int x=0;
        while(t)
        {
            x++;
            if(c%2!=0)
            {
                if(x<=c/2+1) v.push_back(t->val);
                else v1.push_back(t->val);
            }
            else
            {
                if(x<=c/2) v.push_back(t->val);
                else v1.push_back(t->val);
            }
            t=t->next;
        }
        reverse(v1.begin(),v1.end());
        vector<int>v2;
        int i=0;
        int xx=0;
        while(xx!=c/2)
        {
            v2.push_back(v[i]);
            v2.push_back(v1[i]);
            i++;
            xx++;
        }
        if(c%2!=0) v2.push_back(v[v.size()-1]);
        ListNode* te=head;
        int j=0;
        while(te)
        {
            te->val=v2[j];
            j++;
            te=te->next;
        }
    }
};