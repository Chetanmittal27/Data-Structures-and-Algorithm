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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL || head -> next == NULL || k == 0){
            return head;
        }


        int length = 0;
        ListNode* temp = head;
        while(temp != NULL){
            length++;
            temp = temp -> next;
        }

        ListNode* tail = head;

        while(tail -> next != NULL){
            tail = tail -> next;
        }

        k = k % length;
        if(k == 0) return head;
        int stopto = length - k - 1;

        temp = head;

        while(stopto--){
            temp = temp -> next;
        }

        tail -> next = head;
        head = temp -> next;
        temp -> next = NULL;

        return head;
    }
};