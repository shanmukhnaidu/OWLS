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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp=list1;
        int c=0;
        while(temp->next!=NULL)
        {
            if(c==a-1) break;
            temp=temp->next;
            c++;
        }
        ListNode* s=list1;
        int x=0;
        while(s->next!=NULL)
        {
            if(x==b+1) break;
            s=s->next;
            x++;
        }
        temp->next=list2;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=s;
        return list1;
    }
};