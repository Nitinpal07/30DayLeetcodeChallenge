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
    ListNode* oddEvenList(ListNode* head) {
        if(!head)return head;
        if(!head->next)return head;
        
        ListNode* odd = head;
        ListNode* oddhead=odd;
        ListNode* even = head->next;
        ListNode* evenhead=even;
        ListNode* temp=head->next->next;
        if(!temp){
            return head;
        }
        
        int count=1;
        while(temp){
            if(count%2==1){
              odd->next=temp;
              odd=odd->next;
              temp=temp->next;
              count++;
            }
            else{
                even->next=temp;
                even=even->next;
                temp=temp->next;
                count++;
            }
        }
        even->next=NULL;
        odd->next=evenhead;
        
        return oddhead;
    }
};
