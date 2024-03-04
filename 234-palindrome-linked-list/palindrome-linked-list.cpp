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
       string x="";
       while(temp)
       {
         char s=char(temp->val);
         x+=s;
         temp=temp->next;
       } 
       string p=x;
       reverse(x.begin(),x.end());
       if(x==p) return true;
       return false;
    }
};