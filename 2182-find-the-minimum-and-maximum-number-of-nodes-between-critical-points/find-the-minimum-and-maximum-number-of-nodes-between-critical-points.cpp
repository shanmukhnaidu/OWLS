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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp=head;
        vector<int>v,max,min;
        while(temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        if(v.size()<=3) return{-1,-1};
        for(int i=1;i<v.size();i++)
        {
            if(i+1<v.size())
            {
                if(v[i-1]<v[i] and v[i+1]<v[i])max.push_back(i+1);
                if(v[i-1]>v[i] and v[i+1]>v[i])min.push_back(i+1);
            }
        }
        for(auto it:max)min.push_back(it);
        // cout<<endl;
        // for(auto it:min)cout<<it<<" ";
        sort(min.begin(),min.end());
        for(auto it:min)cout<<it<<" ";
        if(min.size()==1)return {-1,-1};
        if(min.size()==2) return {min[1]-min[0],min[1]-min[0]};
         int maxx=10000;
        for(int i=min.size()-1;i>=1;i--)
        {
            if(min[i]-min[i-1]<maxx and min[i]-min[i-1]>=0)maxx=min[i]-min[i-1];
        }
        if(min.size()>2)
        {
            return {maxx,min[min.size()-1]-min[0]};
        }
        return {-1,-1};
    }
};