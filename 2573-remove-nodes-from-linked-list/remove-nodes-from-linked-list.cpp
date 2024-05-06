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
    ListNode* removeNodes(ListNode* head) {
        vector<int>v;
        ListNode* temp=head;
        while(temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        int maxx=v[v.size()-1];
        for(int i=v.size()-1;i>=0;i--)
        {
            if(v[i]>maxx)maxx=v[i];
            while(maxx>v[i] and i>=0)
            {
                v[i]=-1;
                if(i!=0)i--;
                else break;
            }
            if(i>=0 and v[i]>maxx)maxx=v[i];
        } 
        for(auto it:v)cout<<it<<" ";
        ListNode* t=new ListNode(-1);
        ListNode* tt=t;
        for(auto it:v)
        {
            if(it!=-1)
            {
                ListNode* ne=new ListNode(it);
                tt->next=ne;
                tt=ne;
            }
        }
        return t->next;
    }
};