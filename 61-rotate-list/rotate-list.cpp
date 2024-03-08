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
    ListNode* rotateRight(ListNode* head, int k) {
       ListNode* temp=head;
       if(head==NULL or head->next==NULL)return head;
       vector<int>v1;
       vector<int>v2;
       int c=0;
       vector<int>v;
       while(temp)
       {
           c++;
           v.push_back(temp->val);
           temp=temp->next;
       }
       k=k%c;
       if(k==c) return head;
       int x=c-k;
       ListNode* t=head;
       int q=0;
       while(t)
       {
           q++;
           if(q<=x) v1.push_back(t->val);
           else v2.push_back(t->val);
           t=t->next;
       }
       vector<int>ans;
       for(auto it:v2) ans.push_back(it);
       for(auto it:v1) ans.push_back(it);
    //    for(auto it:v1) cout<<it<<" ";
    //    cout<<endl;
    //    for(auto it:v2) cout<<it<<" ";
       ListNode* tt=head;
       int i=0;
       while(tt)
       {
           tt->val=ans[i];
           i++;
           tt=tt->next;
       }
       return head;
    }
};