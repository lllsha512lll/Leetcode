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
        ListNode result(0);
        ListNode *temp = &result;
        int carry=0;
        while(l1!=nullptr || l2!=nullptr || carry){
            int n1 = l1!=nullptr ? l1->val : 0;
            int n2 = l2!=nullptr ? l2->val : 0;
            int n = n1 + n2 + carry;
            temp->next = new ListNode(n%10);
            temp = temp -> next;
            carry = n / 10;
            l1 = l1!=nullptr ? l1->next : nullptr;
            l2 = l2!=nullptr ? l2->next : nullptr;
        }
        return result.next;
    }
};