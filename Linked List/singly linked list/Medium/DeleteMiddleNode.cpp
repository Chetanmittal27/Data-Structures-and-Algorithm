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

    ListNode* deleteMiddle(ListNode* head) {

        if(head == NULL) return NULL;
        if(head -> next == NULL) {
            delete head;
            return NULL;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        ListNode* x = nullptr;


        while(fast != NULL && fast -> next != NULL){
            x = slow;
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        x -> next = slow -> next;
        delete slow;
        return head;
    }
};