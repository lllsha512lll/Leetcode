/*
Runtime: 31 ms, faster than 62.24% of C++ online submissions for Merge k Sorted Lists.
Memory Usage: 13.6 MB, less than 31.97% of C++ online submissions for Merge k Sorted Lists.
*/

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<ListNode*> *merged;
        if(lists.size() == 0) return nullptr;
        
        while(lists.size() > 1){
            merged = new vector<ListNode*>();
            for(int i=0; i < lists.size(); i+=2){
            
            ListNode* list1 = lists[i];
            ListNode* list2 = i + 1 < lists.size() ? lists[i+1] : nullptr;
            merged->push_back(mergeTwoLists(list1, list2));
            
            }
            lists = *merged;
            
        }
        return lists[0];
    }
    ListNode *mergeTwoLists(ListNode* l1, ListNode* l2){
        if(l1 == nullptr) return l2;
        if(l2 == nullptr) return l1;
        
        if(l1 -> val < l2 -> val){
            l1 -> next = mergeTwoLists(l1 -> next, l2);
            return l1;
        }
        else{
            l2 -> next = mergeTwoLists(l1, l2 -> next);
            return l2;
        }
    }
};

