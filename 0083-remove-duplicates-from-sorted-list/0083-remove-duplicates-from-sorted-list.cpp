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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return nullptr;

        unordered_map<int, int> count;
        ListNode* cur = head;
        ListNode* prev = nullptr;

        while (cur) {
            count[cur->val]++;
            if (count[cur->val] > 1) {
                prev->next = cur->next;
                delete cur;
            } else {
                prev = cur;
            }
            cur = prev->next;
        }

        return head;
    }
};