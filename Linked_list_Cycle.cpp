class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> nodeSeen;
        while (head != nullptr) {
            if (nodeSeen.count(head)) {
                return true;
            } else {
                nodeSeen.insert(head);
            }
            head = head->next;
        }
        return false;
    }
};
