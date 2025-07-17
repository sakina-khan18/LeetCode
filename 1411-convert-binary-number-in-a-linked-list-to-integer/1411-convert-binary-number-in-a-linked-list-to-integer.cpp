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
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* nex=head;
        while(curr!=NULL)
        {
            curr=curr->next;
            nex->next=prev;
            prev=nex;
            nex=curr;
        }
        return prev;
    }
    int getDecimalValue(ListNode* head) {
        head=reverse(head);
        int i=0;
        int ans=0;
        while(head!=NULL)
        {
            ans+=head->val*pow(2,i);
            i++;
            head=head->next;
        }
        return ans;
    }
};