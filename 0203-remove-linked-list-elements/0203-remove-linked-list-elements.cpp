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
    ListNode* removeElements(ListNode* head, int val) {
       
  while (head && head->val == val) {
            head = head->next;
        }
        ListNode* curr = head;
        if (!curr) return nullptr; // if all nodes were removed

        ListNode* next = curr->next;

        while(next){
          if(next->val==val){
 curr->next=next->next;
//  curr=curr->next;
 next=curr->next;
//  next=next->next->next;
          }
          else{
            curr=next;
            next=next->next;
          }
        }
        return head;
    }
};