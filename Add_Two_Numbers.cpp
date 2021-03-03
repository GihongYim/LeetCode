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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode * head = new ListNode(0);
        ListNode * ret = head;
        
        ListNode * c1;
        ListNode * c2;
        c1 = l1;
        c2 = l2;
        int n;
        ListNode *NewNode;
        while(c1 != nullptr || c2 != nullptr){
            n = (*ret).val;
            if( c1 != NULL){
                n += (*c1).val;
                c1 = (*c1).next;
            }
            if( c2 != NULL){
                n += (*c2).val;
                c2 = (*c2).next;
            }
            if(n>=10){
                carry = 1;
                n -= 10;
            }else{
                carry = 0;
            }
            (*ret).val = n;
            if(c1==nullptr && c2==nullptr && carry == 0)
                break;
            NewNode = new ListNode(carry);
            (*ret).next = NewNode;
            ret = (*ret).next;
        }
        
        return head;
    }
};
