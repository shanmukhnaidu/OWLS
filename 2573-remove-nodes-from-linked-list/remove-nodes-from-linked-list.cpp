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
        stack<int>st;
        ListNode* temp=head;
        st.push(temp->val);
        temp=temp->next;
        while(temp)
        {
            if((temp->val)>st.top())
            {
                while(!st.empty() and st.top()<temp->val)
                {
                    st.pop();
                }
                st.push(temp->val);
                temp=temp->next;
            }
            else
            {
                st.push(temp->val);
                temp=temp->next;
            }
        }
        vector<int>v;
        while(!st.empty())
        {
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());
        ListNode* dum=new ListNode(-1);
        ListNode* curr=dum;
        for(auto it:v)
        {
            ListNode* ne=new ListNode(it);
            curr->next=ne;
            curr=ne;
        }
        return dum->next;
    }
};