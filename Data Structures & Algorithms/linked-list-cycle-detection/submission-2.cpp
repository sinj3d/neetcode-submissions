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
    bool hasCycle(ListNode* head) {
        vector<ListNode*> nodes;
        ListNode* h = head;
        if(h == nullptr){
            return false;
        }
        while(find(nodes.begin(), nodes.end(), h) == nodes.end()){
            if(h->next == nullptr){
                break;
            } else{
                nodes.push_back(h);
                h = h->next;
            }
        }
        if(h->next == nullptr){
            return false;
        } else{
            return true;
        }
    }
};
