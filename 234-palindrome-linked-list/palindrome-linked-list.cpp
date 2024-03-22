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
    bool isPalindrome(ListNode* head) {
       ListNode* temp=head;
       string s;
       while(temp)
       {
         s+=temp->val;
         temp=temp->next;
       }
       string p=s;
       reverse(s.begin(),s.end());
       if(s==p) return true;
       return false;
    }
};