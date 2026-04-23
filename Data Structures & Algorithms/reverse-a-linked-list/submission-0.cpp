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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr){
            return nullptr;
        }
        ListNode* slow = nullptr;
        ListNode* mid = head;
        ListNode* fast = head->next;
        while(fast != nullptr){
            mid->next = slow;
            slow = mid;
            mid = fast;
            fast = fast->next;
        }
        mid->next = slow;
        return mid;
    }
};
