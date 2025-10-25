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
    ListNode* reverseNode(ListNode* current, ListNode* parent){
        ListNode* old_next = current->next;
        current->next = parent;
        if(old_next)
            return reverseNode(old_next, current);
        return current;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* h2 = reverseNode(slow, nullptr);

        while(head && h2){
            if(head->val != h2->val)
                return false;
            head = head->next;
            h2 = h2->next;
        }
        return true;
    }
};